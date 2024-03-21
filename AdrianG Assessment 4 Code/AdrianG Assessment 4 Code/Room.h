#pragma once
#include "Game.h"

#include <string>

class Room : public Game
{
public:
	Room();
	~Room();

public:
	void Makemap();
	
	void Room_Description(string desc);

public:
	
	string roomDescription;


};

