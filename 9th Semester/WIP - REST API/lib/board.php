<?php 

function read_board() {
	global $mysqli;
	$sql = 'select * from board';
	$st = $mysqli->prepare($sql);
	$st->execute();
	$res = $st->get_result();
	return($res->fetch_all(MYSQLI_ASSOC));
}

function reset_board() {
	 
	global $mysqli;
	 $sql = 'call clean_board()';
	 $mysqli->query($sql);
	 read_board();
}

function show_board($input) {

	global $mysqli;
	
	$b = current_player($input['token']);

	if($b) {
		show_board_by_player($b);}
	 else {
		header('Content-type: application/json');
		print json_encode(read_board(), JSON_PRETTY_PRINT);
	}
}

function show_board_by_player($b) {

	global $mysqli;

	$b =  current_player($b['token']);
	if($b == null ) {
		header("HTTP/1.1 400 Bad Request");
		print json_encode(['errormesg'=>"You are not a player of this game."]);
		exit;
	}
	header('Content-type: application/json');
	print json_encode(read_board(), JSON_PRETTY_PRINT);
}

function get_ship($c1,$c2,$c3,$c4,$c5,$b1,$b2,$b3,$b4,$d1,$d2,$d3,$s1,$s2,$s3,$pb1,$pb2,$player_id,$token) {
	 
	if($token==null || $token=='') {
		header("HTTP/1.1 400 Bad Request");
		print json_encode(['errormesg'=>"token is not set."]);
		exit;
	}
	
	$player = current_player($token);
	if($player==null ) {
		header("HTTP/1.1 400 Bad Request");
		print json_encode(['errormesg'=>"You are not a player of this game."]);
		exit;
	}
	$status = read_status();
	if($status['status']!='started') {
		header("HTTP/1.1 400 Bad Request");
		print json_encode(['errormesg'=>"Game is not in action."]);
		exit;
	}
	if($status['p_turn']!=$player_id) {
		header("HTTP/1.1 400 Bad Request");
		print json_encode(['errormesg'=>"It is not your turn."]);
		exit;
	}
	set_ship($c1,$c2,$c3,$c4,$c5,$b1,$b2,$b3,$b4,$d1,$d2,$d3,$s1,$s2,$s3,$pb1,$pb2,$player_id);
}

function set_ship($c1,$c2,$c3,$c4,$c5,$b1,$b2,$b3,$b4,$d1,$d2,$d3,$s1,$s2,$s3,$pb1,$pb2,$player_id){
	global $mysqli;

	if($player_id=='P1'){
		$CarrierColRow = array($c1,$c2,$c3,$c4,$c5);
		$BattleshipColRow = array($b1,$b2,$b3,$b4);
		$DestroyerColRow = array($d1,$d2,$d3);
		$SubmarineColRow = array($s1,$s2,$s3);
		$PatrolBoatColRow = array($pb1,$pb2);

		foreach ($CarrierColRow as $x) {
			$sql = "UPDATE `board` SET position='ship', shipType='Carrier' WHERE player_id='P1' AND coordinate=?";
            $st = $mysqli->prepare($sql);
            $st->bind_param('s', $x);
            $st->execute();     
		  }
		foreach ($BattleshipColRow as $x) {
			$sql = "UPDATE `board` SET position='ship', shipType='Battlehsip' WHERE player_id='P1' AND coordinate=?";
            $st = $mysqli->prepare($sql);
            $st->bind_param('s', $x);
            $st->execute();     
		  }
		foreach ($DestroyerColRow as $x) {
			$sql = "UPDATE `board` SET position='ship', shipType='Destroyer' WHERE player_id='P1' AND coordinate=?";
            $st = $mysqli->prepare($sql);
            $st->bind_param('s', $x);
            $st->execute();     
		  }
		foreach ($SubmarineColRow as $x) {
			$sql = "UPDATE `board` SET position='ship', shipType='Submarine' WHERE player_id='P1' AND coordinate=?";
            $st = $mysqli->prepare($sql);
            $st->bind_param('s', $x);
            $st->execute();     
		  }
		foreach ($PatrolBoatColRow as $x) {
			$sql = "UPDATE `board` SET position='ship', shipType='Patrol Boat' WHERE player_id='P1' AND coordinate=?";
            $st = $mysqli->prepare($sql);
            $st->bind_param('s', $x);
            $st->execute();     
		  }
		$other_player = 'P2'; 
	}
	else{
		$CarrierColRow = array($c1,$c2,$c3,$c4,$c5);
		$BattleshipColRow = array($b1,$b2,$b3,$b4);
		$DestroyerColRow = array($d1,$d2,$d3);
		$SubmarineColRow = array($s1,$s2,$s3);
		$PatrolBoatColRow = array($pb1,$pb2);

		foreach ($CarrierColRow as $x) {
			$sql = "UPDATE `board` SET position='ship', shipType='Carrier' WHERE player_id='P1' AND coordinate=?";
            $st = $mysqli->prepare($sql);
            $st->bind_param('s', $x);
            $st->execute();     
		  }
		foreach ($BattleshipColRow as $x) {
			$sql = "UPDATE `board` SET position='ship', shipType='Battlehsip' WHERE player_id='P1' AND coordinate=?";
            $st = $mysqli->prepare($sql);
            $st->bind_param('s', $x);
            $st->execute();     
		  }
		foreach ($DestroyerColRow as $x) {
			$sql = "UPDATE `board` SET position='ship', shipType='Destroyer' WHERE player_id='P1' AND coordinate=?";
            $st = $mysqli->prepare($sql);
            $st->bind_param('s', $x);
            $st->execute();     
		  }
		foreach ($SubmarineColRow as $x) {
			$sql = "UPDATE `board` SET position='ship', shipType='Submarine' WHERE player_id='P1' AND coordinate=?";
            $st = $mysqli->prepare($sql);
            $st->bind_param('s', $x);
            $st->execute();     
		  }
		foreach ($PatrolBoatColRow as $x) {
			$sql = "UPDATE `board` SET position='ship', shipType='Patrol Boat' WHERE player_id='P1' AND coordinate=?";
            $st = $mysqli->prepare($sql);
            $st->bind_param('s', $x);
            $st->execute();     
		  }
		$other_player = 'P1'; 
	}

	$sql = 'UPDATE `game_status` set player_turn=?;';
    $st = $mysqli->prepare($sql);
    $st->bind_param('s', $other_player);
    $st->execute();
}
function get_attack($position,$input,$player_id, $token) {
	 
	if($token==null || $token=='') {
		header("HTTP/1.1 400 Bad Request");
		print json_encode(['errormesg'=>"token is not set."]);
		exit;
	}
	
	$player = current_player($token);
	if($player==null ) {
		header("HTTP/1.1 400 Bad Request");
		print json_encode(['errormesg'=>"You are not a player of this game."]);
		exit;
	}
	$status = read_status();
	if($status['status']!='started') {
		header("HTTP/1.1 400 Bad Request");
		print json_encode(['errormesg'=>"Game is not in action."]);
		exit;
	}
	if($status['p_turn']!=$player) {
		header("HTTP/1.1 400 Bad Request");
		print json_encode(['errormesg'=>"It is not your turn."]);
		exit;
	}
	make_attack($position,$player_id);
}
function make_attack($position,$player_id) {
	global $mysqli;
	if ($player_id=='P1'){
		$sql = "UPDATE `board` SET =IF( shipType IS NOT NULL, 'hit', 'ship') WHERE player='P2' AND Col=? AND Row=?";
		$other_player ='P2' ;
	}
	else{
		$sql = "UPDATE `board` SET =IF( shipType IS NOT NULL, 'hit', 'ship') WHERE player='P1' AND Col=? AND Row=?";
		$other_player ='P1' ;
	}
	$st = $mysqli->prepare($sql);
	$st->bind_param('s',$move);
	$st->execute();

	$sql = 'UPDATE `game_status` set player_turn=?;';
	$st = $mysqli->prepare($sql);
	$st->bind_param('s',$other_player);
	$st->execute();
	
	check_abort();	
	check_end();
}
?>