
void DoOmniDrive(int deadzone, ubyte portfr, ubyte portbr, ubyte portfl, ubyte portbl)
{
	//Make variables which we can store data to
	int X2 = 0, Y1 = 0, X1 = 0;

	//If left stick (up/down) moved, if the value is greater than the deadzone, set to var.
	if(abs(vexRT[Ch3]) > deadzone)
	Y1 = vexRT[Ch3];
	else
	Y1 = 0;

	//If right stick (left/right) moved, if the value is greater than the deadzone, set to var.
	if(abs(vexRT[Ch1]) > deadzone)
	X2 = vexRT[Ch1];
	else
	X2 = 0;

	//Remote Control Commands
	motor[portfr] = Y1 - X2 - X1;
	motor[portbr] =  Y1 - X2 + X1;
	motor[portfl] = Y1 + X2 + X1;
	motor[portbl] =  Y1 + X2 - X1;
}
