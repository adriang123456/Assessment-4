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
	void Makemap_W_Item();

public:
	
	string roomDescription;
	string rooms[10][10] = { { "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"},
						     { "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"},
						     { "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"},
						     { "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"},
						     { "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"},
						     { "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"},
						     { "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"},
						     { "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"},
						     { "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"},
						     { "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"} };

};

