#pragma once
#include "Game.h"

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player : public Game
{
	// constructos and destructors
public:
	Player();
	Player(int x, int y, string pname);
	~Player();

	// functions 
public:
	int P_Action(int p_a);
	void Add_To_Inven();

	// variables
public:
	int p_x;
	int p_y;
	
	int p_action = 1;

	int np_x;
	int np_y;

	string player_name;

	vector<string> inventory;

	bool is_item;
	bool has_item;

};


