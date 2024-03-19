#pragma once
#include "Game.h"

class Player : public Game
{
public:
	Player();
	~Player();

public:
	int p_x;
	int p_y;
};

