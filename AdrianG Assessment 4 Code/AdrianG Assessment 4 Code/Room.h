#pragma once
#include "Game.h"
class Room : public Game
{
public:
	Room();
	~Room();

public:
	void Makemap();
	int RanNum();

public:
	
	string roomDescription;


};

