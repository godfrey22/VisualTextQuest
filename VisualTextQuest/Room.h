#pragma once
#ifndef ROOM_H
#define ROOM_H

#include <vector>
#include <iostream>
#include "Event.h"
#include "EnemyFactory.h"

using namespace std;

class Room {
public:
	Room();
	Room(int x, int y, vector<Event*>);
	~Room();
	int generateEnemyIntheRoom();
	int generateEventIntheRoom(vector<Event*>);

	Room getRoomFromArray(int x, int y);
	void setRoomToArray(int x, int y, Room incomingRoom);
	int getX();
	int getY();

	bool getDoorN();
	void setDoorN(int, int, string);
	bool getDoorW();
	void setDoorW(int, int, string);
	bool getDoorE();
	void setDoorE(int, int, string);
	bool getDoorS();
	void setDoorS(int, int, string);

	bool getVisited();
	void setVisited(int, int);
	void setPlayer(int x, int y);
	bool getPlayer();
	vector<Event*> getEventList();
	vector<Enemy*> getEnemyList();
	void clearRoom(int, int);
	void loadPlayerFromFile(int, int, string);
	void loadVisitedFromFile(int, int, string);


private:
	int x, y;
	bool door_N, door_S, door_W, door_E, visited, player;
	vector<Event*> eventList;
	vector<Enemy*> enemyList;
	static Room roomArray[10][10];

};
#endif // ROOM_H
