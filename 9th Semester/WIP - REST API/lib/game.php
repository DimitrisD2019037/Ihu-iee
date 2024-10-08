<?php

function show_status() {
	
	global $mysqli;
	
	check_abort();
	
	$sql = 'select * from game_status';
	$st = $mysqli->prepare($sql);

	$st->execute();
	$res = $st->get_result();

	header('Content-type: application/json');
	print json_encode($res->fetch_all(MYSQLI_ASSOC), JSON_PRETTY_PRINT);


}
function check_abort() {
	global $mysqli;
	
	$sql = "update game_status set status='aborted', result=if(p_turn='P1','P2','P1'),p_turn=null where p_turn is not null and last_change<(now()-INTERVAL 5 MINUTE) and status='started'";
	$st = $mysqli->prepare($sql);
	$r = $st->execute();
}

function check_end(){
	global $mysqli;

	$sqt4 = $mysqli-> prepare("select count(*) as n1 FROM board WHERE player_id='P1' AND position='hit'");
	$sqt4->execute();
	$res4 = $sqt4->get_result();
	$n1=$res4 -> fetch_all()['n1'];

	$sqt4 = $mysqli-> prepare("select count(*) as n2 FROM board WHERE player_id='P2' AND position='hit'");
	$sqt4->execute();
	$res4 = $sqt4->get_result();
	$n2=$res4 -> fetch_all()['n2'];

	//number of maximun hits
	if ($n1==17){
		$x1 = 'P1';

		$sq5= "UPDATE game_status SET result=?, status='ended'";
		$st = $mysqli-> prepare($sq5);
		$st -> bind_param('s', $x1);
		$st -> execute();
	}

	if ($n2==17){
		$x2= 'P2';

		$sq6= "UPDATE game_status SET result=?, status='ended'";
		$st = $mysqli-> prepare($sq6);
		$st -> bind_param('s', $x2);
		$st -> execute();
	}

}
function update_game_status() {
	global $mysqli;
	
	$status = read_status();
	$new_status=null;
	$new_turn=null;
	
	$st3=$mysqli->prepare('select count(*) as aborted from players WHERE last_action< (NOW() - INTERVAL 5 MINUTE)');
	$st3->execute();
	$res3 = $st3->get_result();
	$aborted = $res3->fetch_assoc()['aborted'];
	if($aborted>0) {
		$sql = "UPDATE players SET username=NULL, token=NULL WHERE last_action< (NOW() - INTERVAL 5 MINUTE)";
		$st2 = $mysqli->prepare($sql);
		$st2->execute();
		if($status['status']=='started') {
			$new_status='aborted';
		}
	}

	$sql = 'select count(*) as c from players where username is not null';
	$st = $mysqli->prepare($sql);
	$st->execute();
	$res = $st->get_result();
	$active_players = $res->fetch_assoc()['c'];
	
	switch($active_players) {
		case 0: $new_status='not active'; break;
		case 1: $new_status='initialized'; break;
		case 2: $new_status='started'; 
				if($status['p_turn']==null) {
					$new_turn='P1'; // It was not started before...
				}
				break;
	}

	$sql = 'update game_status set status=?, p_turn=?';
	$st = $mysqli->prepare($sql);
	$st->bind_param('ss',$new_status,$new_turn);
	$st->execute();
}

function read_status() {
	global $mysqli;
	
	$sql = 'select * from game_status';
	$st = $mysqli->prepare($sql);

	$st->execute();
	$res = $st->get_result();
	$status = $res->fetch_assoc();
	return($status);
}
?>