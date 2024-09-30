<?php
function show_user() {
	global $mysqli;
	$sql = 'select username from players';
	$st = $mysqli->prepare($sql);
	$st->execute();
	$res = $st->get_result();
	header('Content-type: application/json');
	print json_encode($res->fetch_all(MYSQLI_ASSOC), JSON_PRETTY_PRINT);
}

function handle_user($method, $b,$input) {
	if($method=='POST') {
		set_user($input);
	} 
}
function set_user($input) {
	if(!isset($input['username']) || $input['username']=='') {
		header("HTTP/1.1 400 Bad Request");
		print json_encode(['errormesg'=>"No username given."]);
		exit;
	}
	$username=$input['username'];
	$player_id=$input['player_id'];

	global $mysqli;
	$sql = 'select count(*) as c from players username is not null';
	$st = $mysqli->prepare($sql);
	$st->execute();
	$res = $st->get_result();
	$r = $res->fetch_all(MYSQLI_ASSOC);
	if($r[0]['c']>0) {
		header("HTTP/1.1 400 Bad Request");
		print json_encode(['errormesg'=>"Player $player_id is already set. Please select another number."]);
		exit;
	}
	$sql = 'update players set username=?, token=md5(CONCAT( ?, NOW()))  where player_id=?';
	$st2 = $mysqli->prepare($sql);
	$st2->bind_param('sss',$username,$username,$player_id);
	$st2->execute();


	
	update_game_status();
	$sql = 'select * from players where player_id=?';
	$st = $mysqli->prepare($sql);
	$st->bind_param('s',$player_id);
	$st->execute();
	$res = $st->get_result();
	header('Content-type: application/json');
	print json_encode($res->fetch_all(MYSQLI_ASSOC), JSON_PRETTY_PRINT);
	
	
}
function current_player($token) {
	
	global $mysqli;
	if($token==null) {return(null);}
	$sql = 'select * from players where token=?';
	$st = $mysqli->prepare($sql);
	$st->bind_param('s',$token);
	$st->execute();
	$res = $st->get_result();
	if($row=$res->fetch_assoc()) {
		return($row['player_id']);
	}
	return(null);
}




?>