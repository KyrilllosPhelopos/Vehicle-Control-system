
#include <stdio.h>
#include <stdlib.h>
#include"functionsHeaders.h"



int main(void) {
	char ch;
	while(1)
	{
		init_car();
		mainMenu();
		scanf(" %c",&ch);

		while(ch=='a')//to remain in set menu
		{
			turnOnEngine();
			char c;
			scanf(" %c",&c);
			if(c=='a')
			{
				ch='b';//to get into main menu after breaking
				continue;
			}
			else if (c=='b')
			{
				setTrafficLight();
				checkSpeed();
				printState();
				printf("\n \n");
			}
			else if (c=='c')
			{
				setRoomTemp();
				checkSpeed();
				printState();
				printf("\n \n");
			}
			else if(c=='d')
			{
				setEngineTemp();
				checkSpeed();
				printState();
				printf("\n \n");
			}
		}
	 if (ch=='b')
	{
		//turnOffEngine();
		continue;
	}
	else if (ch=='c')
	{
		break;
	}
}
	return 0;
}
