#include <iostream>
#include <vector>

#include "Player.h"
#include "Item.h"
#include "Spell.h"

using namespace std;

// constructors and destructors
Player::Player() {
}
Player::Player(int x, int y, string pname) {
	p_x = x;
	p_y = y;

	player_name = pname;
}
Player::~Player() {
}

Spell* Player_Spells = new Spell("Fireball", 50, "Frostbite", 10, "Healing", 25, "Teleport", 0, "MagicMissile", 100);

// how to tell what to do when you select an option
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
		p_action = 5;
		break;

	case 6:
		p_action = 6;
		break;

	case 7:
		p_action = 7;
		break;

	case 0:
		p_action = 0;
		break;
		
	default:
		break;
	}
	return p_action;
}
