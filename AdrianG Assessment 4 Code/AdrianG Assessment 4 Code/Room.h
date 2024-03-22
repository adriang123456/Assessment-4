#pragma once
#include "Game.h"

#include <string>

class Room
{
	// constructors and destructor
public:
	Room();
	~Room();

	// functions
public:
	//void Makemap();
	
	void Room_Description(string desc, string i_i);
	void Item_Description(string i_i);
	void Item_Use(string i_i);

	// variables
public:
	string roomDescription;

	int random_s;
	int random_n;
	
	bool l_state;
	bool c_state;


};

