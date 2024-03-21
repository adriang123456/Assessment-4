#include <iostream>

#include "Player.h"
#include "Item.h"

using namespace std;

Player::Player() {
}
Player::Player(int x, int y, string pname) {
	p_x = x;
	p_y = y;

	player_name = pname;
}
Player::~Player() {
}

int Player::P_Action(int p_a)
{
	switch (p_a)
	{
	case 1:
		p_y--;
		break;

	case 2:
		p_x--;
		break;

	case 3:
		p_y++;
		break;

	case 4:
		p_x++;
		break;

	case 5:
		
		break;

	case 6:

		break;

	case 7:
		break;

	case 0:
		return 0;
		break;
	}
	return p_action;
}
