#include "Room.h"
#include "Item.h"
#include "Cat.h"
#include "Box_of_Donuts.h"
#include "Lamp.h"

#include <iostream>
#include <cstdlib>

using namespace std;

// constructor and destructor
Room::Room() {
}
Room::~Room() {
	//delete It_ems;
	//It_ems = nullptr;

	//delete cat;
	//cat = nullptr;

	//delete box;
	//box = nullptr;
}

// creating classes
Item* It_ems = new Item();
Cat* cat = new Cat();
Box_of_Donuts* box = new Box_of_Donuts();

//void Room::Makemap()
//{
//	cout << "    --- Map --- \n" ;
//	for (int i = 0; i < 10; i++) {
//		for (int o = 0; o < 10; o++) {
//			cout << rooms[i][o] << " ";
//		}
//		cout << "\n";
//	}
//	
//}

// making a room description
void Room::Room_Description(string desc, string i_i) {
	if (i_i == "O") {cout << desc;}
	else if (i_i == "L") {cout << desc << "Light. ";}
	else if (i_i == "B") {cout << desc << "Box of Donuts. ";}
	else if (i_i == "C") {cout << desc << "Cat. ";}
	else if (i_i == "x") {cout << desc;}
	else if (i_i == "X") {cout << desc;}
}

// making a item description
void Room::Item_Description(string i_i) {
	srand((unsigned)time(NULL));
	
	random_s = rand() % 2;
	random_n = rand() % 10;



	if (i_i == "L") {
		cat->CatDesc("The Lamp is off");
	}
	if (i_i == "B") {
		string ran_n = to_string(random_n);
		if (random_n == 0) {
			box->Description("This box of donuts is empty");
		}
		else { box->Description("This box of donuts has " + ran_n); }
	}
	if (i_i == "C") {
		cat->Catuse("Hi");
	}
}

void Room::Item_Use(string i_i) {
	if (i_i == "L") {
		cat->Catuse("Hi");
	}
	if (i_i == "B") {
		box->BODuse("boo");
	}
	if (i_i == "C") {
		cat->Catuse("Hi");
	}
}

