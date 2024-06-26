#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player
{
	// constructos and destructors
public:
	Player();
	Player(int x, int y, string pname);
	~Player();

	// functions 
public:
	int P_Action(int p_a);
	void Add_To_SPBook();
	void Find_Spell(int l, int r, int x);
	void Compare_Spells(string spell_1, string spell_2);
	void Cast_Spell(string s_n, int s_d);
	void Player_End();

	// variables
public:
	int p_x;
	int p_y;

	int p_action = 1;

	int np_x;
	int np_y;

	int m;

	int spells_dmg[5];


	string player_name;
	string spells[5];

	bool is_item;
	bool has_item;

};

