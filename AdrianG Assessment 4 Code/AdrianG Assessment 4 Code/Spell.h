#pragma once
#include <string>
#include <iostream>

using namespace std;

class Spell
{
public:
	Spell();
	Spell(string name1, int damage1, string name2, int damage2, string name3, int damage3, string name4, int damage4, string name5, int damage5);
	~Spell();

	// functions
public:
	void Cast(string spell_name);
	bool Compare();

	// variables
public:
	string spell_n_1;
	string spell_n_2;
	string spell_n_3;
	string spell_n_4;
	string spell_n_5;

	int spell_d_1;
	int spell_d_2;
	int spell_d_3;
	int spell_d_4;
	int spell_d_5;
};

