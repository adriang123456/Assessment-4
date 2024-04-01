#include "Spell.h"

#include <string>
#include <iostream>

using namespace std;

Spell::Spell() {
}
Spell::Spell(string name1, int damage1, string name2, int damage2, string name3, int damage3, string name4, int damage4, string name5, int damage5){
	spell_n_1 = name1;
	spell_n_2 = name2;
	spell_n_3 = name3;
	spell_n_4 = name4;
	spell_n_5 = name5;

	spell_d_1 = damage1;
	spell_d_2 = damage2;
	spell_d_3 = damage3;
	spell_d_4 = damage4;
	spell_d_5 = damage5;
}
Spell::~Spell() {
}

void Spell::Cast(string spell_name, int spell_dmg) {
	cout << "\n" << "Player has used " << spell_name << ". It has done " << spell_dmg << " damage" << endl;
	cout << "\n\n";
}

bool Spell::Compare(string spell_a, string spell_b)
{
	if (spell_a == spell_b) { cout << "They are the same Spell"; return true; }
	else { return false; }
	return false;
}

