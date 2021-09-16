/*
 * functionsHeaders.h
 *
 *  Created on: Sep 9, 2021
 *      Author: Kyrillos
 */

#ifndef FUNCTIONSHEADERS_H_
#define FUNCTIONSHEADERS_H_

enum state
{
ON,OFF
};
struct carState
{
	int speed;
	enum state ac;
	int roomTemp;
	enum state Engine_temp_Contro ;
	int engineTemp;
};
void init_car();
void mainMenu();

void setMenu();


void turnOnEngine();

void setSpeed(int x);


void setTrafficLight();



void setRoomTemp();


void setEngineTemp();


void checkSpeed();


 void printState();



#endif /* FUNCTIONSHEADERS_H_ */
