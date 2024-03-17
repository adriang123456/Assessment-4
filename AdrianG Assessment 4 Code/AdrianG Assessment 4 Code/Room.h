#pragma once
#include "Game.h"
class Room : public Game
{
public:
	Room();
	~Room();

public:
	void Makemap();

public:
	
	string roomDescription;
	string rooms[10][10] = { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
						 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
						 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
						 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
						 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
						 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
						 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
						 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
						 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
						 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} };

};

