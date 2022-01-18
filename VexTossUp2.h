void foward (int time){
	motor[frontRightMotor] = 127;
  motor[backRightMotor]  = 127;
  motor[frontLeftMotor]  = 127;
  motor[backLeftMotor]   = 127;
	wait1Msec(time);
}

void backwards (int time){
	motor[frontRightMotor] = -127;
  motor[backRightMotor]  = -127;
  motor[frontLeftMotor]  = -127;
  motor[backLeftMotor]   = -127;
	wait1Msec(time);
}

void turn_right (int time){
	motor[frontRightMotor] = -127;
  motor[backRightMotor]  = -127;
  motor[frontLeftMotor]  = 127;
  motor[backLeftMotor]   = 127;
	wait1Msec (time);
 }

void turn_left (int time){
	motor[frontRightMotor] = 127;
 	motor[backRightMotor]  = 127;
 	motor[frontLeftMotor]  = -127;
 	motor[backLeftMotor]   = -127;
	wait1Msec (time);
}

void driveOff (){
	motor[frontRightMotor] = 0;
 	motor[backRightMotor]  = 0;
 	motor[frontLeftMotor]  = 0;
 	motor[backLeftMotor]   = 0;
}

void armUp (int time){
 	motor[armMotor] = 127;
 	wait1Msec (time);
 	motor[armMotor] = 0;
}

void armDown (int time){
 	motor[armMotor] = -127;
 	wait1Msec (time);
}

void armOff (){
	motor [armMotor] = 0;
}

void allOff (){
	/* arms off
  motor [frontarmMotor] = 0;
	motor [backarmMotor] = 0;*/
	// drive off
	motor[frontRightMotor] = 0;
 	motor[backRightMotor]  = 0;
 	motor[frontLeftMotor]  = 0;
 	motor[backLeftMotor]   = 0;
}
