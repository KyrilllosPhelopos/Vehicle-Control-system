
#include"functionsHeaders.h"
#include <stdio.h>
#include <stdlib.h>
struct carState car;
void init_car()
{
car.speed=80;
car.ac=ON;
car.engineTemp=90;
car.roomTemp=35;
car.Engine_temp_Contro=ON;
}
void mainMenu()
{
	printf("a. Turn on the vehicle engine\n");
	printf("b. Turn off the vehicle engine\n");
	printf("c. Quit the system\n");
	fflush(stdout);
}

void setMenu()
{
	printf("a. Turn off the engine\n");
	printf("b. Set the traffic light color.\n");
	printf("c. Set the room temperature\n");
	printf("d. Set the engine temperature\n");
	fflush(stdout);
}


void turnOnEngine()
{
	setMenu();
}

void setSpeed(int x)
{
	car.speed= x;
}

void setTrafficLight()
{
	char c;
	scanf(" %c",&c);
	if(c=='G')
		setSpeed(100);
	else if(c=='O')
		setSpeed(30);
	else if(c=='R')
		setSpeed(0);
}


void setRoomTemp()
{
	int t;
	scanf(" %d",&t);
	if(t < 10 ||t >30)
	{
		car.roomTemp=20;
		car.ac=ON;
	}
	else
	{
		car.ac=OFF;
		car.roomTemp=t;
	}
}

void setEngineTemp()
{
int temp;
scanf(" %d",&temp);
if(temp < 100 || temp > 150)
{
car.engineTemp=125;
car.Engine_temp_Contro=ON;
}
else
{
	car.Engine_temp_Contro=OFF;
	car.engineTemp=temp;
	}


}

void checkSpeed()
{
if(car.speed==30)
{
car.ac=ON;
car.roomTemp=(car.roomTemp*(5.0/4)+1);
car.Engine_temp_Contro=ON;
car.engineTemp=(car.engineTemp *(5.0/4)+1);
}
}

 void printState()
 {

	 printf("Engine state: ON \n");
	 printf("AC: %s \n",car.ac==ON?"On":"OFF");
	 printf("Vehicle Speed: %d\n",car.speed);
	 printf( "Room Temperature: %d\n",car.roomTemp);
	 printf("Engine Temperature Controller State: %s \n",car.Engine_temp_Contro==ON?"On":"OFF");
	 printf( "Engine Temperature: %d \n",car.engineTemp);
	 fflush(stdout);
 }
