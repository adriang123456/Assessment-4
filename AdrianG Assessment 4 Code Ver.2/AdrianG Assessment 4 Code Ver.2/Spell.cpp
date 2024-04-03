#include "Spell.h"

#include <string>
#include <iostream>

using namespace std;

// constructors and destructors
Spell::Spell() {
}
Spell::Spell(string name1, int damage1, string name2, int damage2, string name3, int damage3, string name4, int damage4, string name5, int damage5) {
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

// function to cast a spell
void Spell::Cast(string spell_name, int spell_dmg) {
	if (spell_name == "Healing") {
		cout << "\n" << "Player has used " << spell_name << ". It has healed " << spell_dmg << " damage" << endl;

	}

	else if (spell_name == "Teleport") {
		cout << "\n" << "Player has used " << spell_name << ". It has teleported the player across the room" << endl;

	}
	else { 
		cout << "\n" << "Player has used " << spell_name << ". It has done " << spell_dmg << " damage" << endl; 
		cout << "\n\n";
	}
}

// function to compare two spells
bool Spell::Compare(string spell_a, string spell_b)
{
	if (spell_a == spell_b) { cout << "They are the same spell"; return true; }
	else { cout << "They are not the same spell";  return false; }
	return false;
}
