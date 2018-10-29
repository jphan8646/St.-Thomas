#pragma config(Motor,  port1,           Cannon,        tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           LeftF,         tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port3,           LeftB,         tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           Arm,           tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           RightF,        tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port7,           RightB,        tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           Claw,          tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,          Elevator,      tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//


/*Read Me:
	Literally only used for autonomous testing
	Make sure to copy all changes from BotCoin.c's autonomous into here
	also CHANGE if we can get some enconders because wait statements are inconsistent
*/
task main()
{
	//change direction in accordance with notebook (1-6)
int direction = 1;

//all timed values must be tested
//REMOVE THIS WAIT STATE FOR COMPETITION IT IS ONLY TO GET HANDS OUT OF THE WAY
wait1Msec(1000);
if(direction == 1){
	motor[Cannon]=127;
	wait1Msec(750);
	//turn to middle
	motor[LeftF]=motor[LeftB]=-127;
	motor[RightF]=motor[RightB]=127;
	wait1Msec(500);
	//moves to platform
	motor[LeftF]=motor[LeftB]=127;
	motor[RightF]=motor[RightB]=127;
	wait1Msec(1500);
	//turns to dead mid platform
	motor[LeftF]=motor[LeftB]=-127;
	motor[RightF]=motor[RightB]=127;
	wait1Msec(1000);
	//moves onto platform
	motor[LeftF]=motor[LeftB]=127;
	motor[RightF]=motor[RightB]=127;
	wait1Msec(750);
}
else if(direction==2){
	motor[Cannon]=127;
	wait1Msec(750);
	//turn to middle
	motor[LeftF]=motor[LeftB]=127;
	motor[RightF]=motor[RightB]=-127;
	wait1Msec(500);
	//moves to platform
	motor[LeftF]=motor[LeftB]=127;
	motor[RightF]=motor[RightB]=127;
	wait1Msec(1500);
	//turns to dead mid platform
	motor[LeftF]=motor[LeftB]=127;
	motor[RightF]=motor[RightB]=-127;
	wait1Msec(1000);
	//moves onto platform
	motor[LeftF]=motor[LeftB]=127;
	motor[RightF]=motor[RightB]=127;
	wait1Msec(750);
}
else if(direction==3){
	motor[Cannon]=127;
	wait1Msec(750);
	//turn to cap
	motor[LeftF]=motor[LeftB]=127;
	motor[RightF]=motor[RightB]=-127;
	wait1Msec(250);
	//go to cap
	motor[LeftF]=motor[LeftB]=127;
	motor[RightF]=motor[RightB]=127;
	wait1Msec(1000);
	//lower arm maybe and grab cap
	//motor[Arm]=-63;
	//wait1Msec(500);
	motor[Claw]=-127;
	wait1Msec(750);
	//I have no clue how to flip the cap
	//turn to plat
	motor[LeftF]=motor[LeftB]=-127;
	motor[RightF]=motor[RightB]=127;
	wait1Msec(1000);
	//move onto plat
	motor[LeftF]=motor[LeftB]=127;
	motor[RightF]=motor[RightB]=127;
	wait1Msec(1350);
}
else if(direction==4){
	motor[Cannon]=127;
	wait1Msec(750);
	//turn to cap
	motor[LeftF]=motor[LeftB]=127;
	motor[RightF]=motor[RightB]=-127;
	wait1Msec(250);
	//go to cap
	motor[LeftF]=motor[LeftB]=127;
	motor[RightF]=motor[RightB]=127;
	wait1Msec(1000);
	//lower arm maybe and grab cap
	//motor[Arm]=-63;
	//wait1Msec(500);
	motor[Claw]=-127;
	wait1Msec(750);
	//I have no clue how to flip the cap
	//turn to plat
	motor[LeftF]=motor[LeftB]=127;
	motor[RightF]=motor[RightB]=-127;
	wait1Msec(1000);
	//move onto plat
	motor[LeftF]=motor[LeftB]=127;
	motor[RightF]=motor[RightB]=127;
	wait1Msec(1350);
}
else if(direction==5){
	motor[LeftF]=motor[LeftB]=127;
	motor[RightF]=motor[RightB]=127;
	wait1Msec(1350);
	//I don't know how to flip the diagnol cap but Zach said the claw could do it
	//turn to platform
	motor[LeftF]=motor[LeftB]=-127;
	motor[RightF]=motor[RightB]=127;
	wait1Msec(1000);
	//move onto plat
	motor[LeftF]=motor[LeftB]=127;
	motor[RightF]=motor[RightB]=127;
	wait1Msec(1350);
}
else if(direction==6){
	motor[LeftF]=motor[LeftB]=127;
	motor[RightF]=motor[RightB]=127;
	wait1Msec(1350);
	//I don't know how to flip the diagnol cap but Zach said the claw could do it
	//turn to platform
	motor[LeftF]=motor[LeftB]=127;
	motor[RightF]=motor[RightB]=-127;
	wait1Msec(1000);
	//move onto plat
	motor[LeftF]=motor[LeftB]=127;
	motor[RightF]=motor[RightB]=127;
	wait1Msec(1350);
}

else{		//to account for user error in inputing the variable
	motor[LeftF]=motor[LeftB]=-127;
	motor[RightF]=motor[RightB]=127;
	wait1Msec(5000);
}
}
