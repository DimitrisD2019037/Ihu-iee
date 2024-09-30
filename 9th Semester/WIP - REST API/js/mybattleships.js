var me={token:null,player_id:null};
var game_status={};
var board={};
var last_update=new Date().getTime();
var timer=null;

function update_info(){
	$('#game_info').html("I am Player: "+me.player_id+", my name is "+me.username +'<br>Token='+me.token+'<br>Game state: '+game_status.status+', '+ game_status.p_turn+' must play now.');
	
	
}
