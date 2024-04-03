#include <iostream>
#include <vector>

#include "Player.h"
#include "Item.h"
#include "Spell.h"
#include "String.h"

using namespace std;
Spell* Player_Spells = new Spell("Fireball", 50, "Frostbite", 10, "Healing", 25, "Teleport", 0, "MagicMissile", 100);

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



// How to tell what to do when you select an option
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

// Adding the spells to the players spellbook
void Player::Add_To_SPBook() {
	//spells.push_back(Player_Spells->spell_n_1);
	//spells.push_back(Player_Spells->spell_n_2);
	//spells.push_back(Player_Spells->spell_n_3);
	//spells.push_back(Player_Spells->spell_n_4);
	//spells.push_back(Player_Spells->spell_n_5);

	//spells_dmg.push_back(Player_Spells->spell_d_1);
	//spells_dmg.push_back(Player_Spells->spell_d_2);
	//spells_dmg.push_back(Player_Spells->spell_d_3);
	//spells_dmg.push_back(Player_Spells->spell_d_4);
	//spells_dmg.push_back(Player_Spells->spell_d_5);

	spells[0] = Player_Spells->spell_n_1;
	spells[1] = Player_Spells->spell_n_2;
	spells[2] = Player_Spells->spell_n_3;
	spells[3] = Player_Spells->spell_n_4;
	spells[4] = Player_Spells->spell_n_5;

	spells_dmg[0] = Player_Spells->spell_d_1;
	spells_dmg[1] = Player_Spells->spell_d_2;
	spells_dmg[2] = Player_Spells->spell_d_3;
	spells_dmg[3] = Player_Spells->spell_d_4;
	spells_dmg[4] = Player_Spells->spell_d_5;

}

void Player::Find_Spell(int s_pos, int size, int target) {
	if (target > 4) {
		cout << "Spell is not known";
	}
	else if (target < 5) {
		m = s_pos + (size - s_pos) / 2;

		if (spells[m] == spells[target]) {
			cout << "Spell is known";
		}

		else if (spells[m] < spells[target]) {
			cout << "Spell is known";
			s_pos = m + 1;
		}
		else if (spells[m] > spells[target]) {
			cout << "Spell is known";
			size = m - 1;
		}
		else { cout << "Spell is not known"; }

	}
}

void Player::Compare_Spells(string spell_1, string spell_2) {
	Player_Spells->Compare(spell_1, spell_2);
}

void Player::Cast_Spell(string s_n, int s_d) {
	Player_Spells->Cast(s_n, s_d);
}

void Player::Player_End(){
	delete Player_Spells;
	Player_Spells = nullptr;

	
}

