<?php
require_once "lib/dbconnect.php"; 
require_once "lib/board.php";
require_once "lib/game.php";
require_once "lib/users.php";


$method = $_SERVER['REQUEST_METHOD'];
$request = explode('/', trim($_SERVER['PATH_INFO'],'/'));
$input = json_decode(file_get_contents('php://input'),true);
if($input==null) {
    $input=[];
}
if(isset($_SERVER['HTTP_X_TOKEN'])) {
    $input['token']=$_SERVER['HTTP_X_TOKEN'];
} else {
    $input['token']='';
}

//header("Content-Type: text/plain");
//print "method=$method\n";
//print "Path_info=".$_SERVER['PATH_INFO']."\n";
//print_r($request);

switch ($r=array_shift($request)) {
    case 'board' : 
        switch ($b=array_shift($request)) {
            case '':
            case null: 
                    handle_board($method,$input); 
                    break;
            case 'prep':
                    handle_ship($method,$request[0],$request[1],$request[2],$request[3],$request[4],$request[5],$request[6],$request[7],$request[8],$request[9],$request[10],$request[11],$request[12],$request[13],$request[14],$request[15],$request[16],$request[17],$input,$input['token']);
                    break;
            case 'attack':
                    handle_attack($method,$request[0],$request[1],$input,$input['token']);
                    break;
            default:
                    header("HTTP/1.1 404 Not Found");
                    break;
            }
            break;
    case 'status': 
			if(sizeof($request)==0) {handle_status($method);}
			else {header("HTTP/1.1 404 Not Found");}
			break;
	case 'players': 
                handle_player($method, $request,$input);
			    break;
	default:  
                header("HTTP/1.1 404 Not Found");
                exit;
}
function handle_board($method,$input) {
    if($method=='GET') {
        show_board($input);
} else if ($method=='POST') {
        reset_board();
        show_board($input);
} else {
    header('HTTP/1.1 405 Method Not Allowed');
}
    
}

function handle_player($method, $request,$input) {
    switch ($b=array_shift($request)) {
		case '':
		case null:
             if($method=='GET') {
                show_user();}
			 else if ($method=='POST'){
                handle_user($method, $b,$input);  }
             else{
                print json_encode(['errormesg'=>"Method $method not allowed here."]);
            }
            break;
		default: header("HTTP/1.1 404 Not Found");
				 print json_encode(['errormesg'=>"Player $ not found."]);
                 break;
	}
}
function handle_ship($method,$c1,$c2,$c3,$c4,$c5,$b1,$b2,$b3,$b4,$d1,$d2,$d3,$s1,$s2,$s3,$pb1,$pb2,$player_id,$input,$token) {
    
    if($method=="POST"){
        get_ship($c1,$c2,$c3,$c4,$c5,$b1,$b2,$b3,$b4,$d1,$d2,$d3,$s1,$s2,$s3,$pb1,$pb2,$player_id,$token);
    }
    else{
        print json_encode(['errormesg'=>"Method $method not allowed here."]);

    }
}
function handle_attack($method,$position,$player_id,$input,$token) {
    if($method=='POST') {
        get_attack($position,$player_id,$input,$token);
    } else {
        header('HTTP/1.1 405 Method Not Allowed');
    }
}
function handle_status($method) {
    if($method=='GET') {
        show_status();
    } else {
        header('HTTP/1.1 405 Method Not Allowed');
    }
}


?>