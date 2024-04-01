#pragma once
#include "Game.h"

#include <iostream>
#include <string>

using namespace std;

class Room
{
	// constructors and destructor
public:
	Room();
	~Room();

	//Item* It_ems;
	//Cat* cat;
	//Box_of_Donuts* box;
	//Lamp* lamp;
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
	int b_state;

	bool filler;

};

