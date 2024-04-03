#include "Room.h"
#include "Item.h"
#include "Cat.h"
#include "Box_of_Donuts.h"
#include "Lamp.h"

#include <iostream>
#include <cstdlib>

using namespace std;

// making classes needed in this code
Item* It_ems = new Item();
Cat* cat = new Cat();
Box_of_Donuts* box = new Box_of_Donuts();
Lamp* lamp = new Lamp();

// constructor and destructor
Room::Room() {
	//Item* It_ems = new Item();
	//Cat* cat = new Cat();
	//Box_of_Donuts* box = new Box_of_Donuts();
	//Lamp* lamp = new Lamp();
}
Room::~Room() {
	//delete It_ems;
	//It_ems = nullptr;

	//delete cat;
	//cat = nullptr;

	//delete box;
	//box = nullptr;

	//delete lamp;
	//lamp = nullptr;
}

// making a room description
void Room::Room_Description(string desc, string i_i) {
	if (i_i == "O") { cout << desc; }
	else if (i_i == "L") { cout << desc << "Lamp. "; }
	else if (i_i == "B") { cout << desc << "Box of Donuts. "; }
	else if (i_i == "C") { cout << desc << "Cat. "; }
	else if (i_i == "x") { cout << desc; }
	else if (i_i == "X") { cout << desc; }
}

// making a item description
void Room::Item_Description(string i_i) {
	srand((unsigned)time(NULL));

	random_s = rand() % 2;
	random_n = rand() % 10;



	if (i_i == "L") {
		if (random_s == 0) {
			lamp->Description("The Lamp is off");
			l_state = false;
		}
		else if (random_s == 1) {
			lamp->Description("The Lamp is on");
			l_state = true;
		}
	}
	if (i_i == "B") {
		string ran_n = to_string(random_n);
		if (random_n == 0) {
			box->Description("This box of donuts is empty");
			b_state = 0;
		}
		else {
			box->Description("This box of donuts has " + ran_n);
			b_state = random_n;
		}
	}
	if (i_i == "C") {
		if (random_s == 0) {
			cat->Description("The cat is not purring");
			c_state = false;
		}
		else if (random_s == 1) {
			cat->Description("The cat is purring");
			c_state = true;
		}
	}
}

// function to use and item
void Room::Item_Use(string i_i) {
	if (i_i == "L") {
		lamp->Use(l_state, 0);
	}
	if (i_i == "B") {
		box->Use(filler, b_state);
	}
	if (i_i == "C") {
		cat->Use(c_state, 0);
	}
}

// function to delete and assign class pointers to null
void Room::Item_End(){
	delete It_ems;
	It_ems = nullptr;
	
	delete cat;
	cat = nullptr;
	
	delete box;
	box = nullptr;
	
	delete lamp;
	lamp = nullptr;
}
