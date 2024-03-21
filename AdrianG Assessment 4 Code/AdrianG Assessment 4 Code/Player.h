#pragma once
#include "Game.h"

class Player : public Game
{
public:
	Player();
	Player(int x, int y, string pname);
	~Player();

public:

	int P_Action(int p_a);

public:
	int p_x;
	int p_y;
	
	int p_action;

	int np_x;
	int np_y;

	string player_name;

	bool is_item;
	bool has_item;

};


