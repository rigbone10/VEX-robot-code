#pragma config(Motor,  port2,           frontRight,    tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port3,           backRight,     tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port4,           frontLeft,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           backLeft,      tmotorVex393_MC29, openLoop)



int Java = 1;
int Csharp = 1;
int threshold = 10;
bool buttonstate = false;
task main()
{

	while (Java == Csharp)
	{
		if (vexRT[Btn7U] == 1 && buttonstate == false)
			buttonstate = true;

  	while(buttonstate == true)
  	{ motor[port2] = (vexRT[Ch3] * -1);
  		motor[port3] = (vexRT[Ch3] * -1);
  		motor[port4] = (vexRT[Ch2] * -1);
  		motor[port5] = (vexRT[Ch2] * -1);
  		if(vexRT[Btn7U] == 1 && buttonstate == true)
  		buttonstate = false;
  	}

		if (abs(vexRT[Ch2]) > threshold)
		{ motor[port2] = vexRT[Ch2];
			motor[port3] = vexRT[Ch2];
		}

		else
		{
			motor[port2] = 0;
			motor[port3] = 0;
		}

		if (abs(vexRT[Ch3]) > threshold)
		{ motor[port4] = vexRT[Ch3];
			motor[port5] = vexRT[Ch3];
	  }

	  else
	  {
	  	motor[port4] = 0;
			motor[port5] = 0;
		}



  }
}
