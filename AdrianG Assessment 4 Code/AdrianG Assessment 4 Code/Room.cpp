#include "Room.h"

#include <iostream>
#include <cstdlib>

using namespace std;

Room::Room() {
}

Room::~Room() {
}

void Room::Makemap()
{
	cout << "    --- Map --- \n" ;
	for (int i = 0; i < 10; i++) {
		for (int o = 0; o < 10; o++) {
			cout << rooms[i][o] << " ";
		}
		cout << "\n";
	}
	
}

int Room::RanNum() {
	srand((unsigned)time(NULL));

	int random = rand() % 10;
	return random;
}

void Room::Makemap_W_Item() { // figure out how to get a new random number

	cout << "\n";
	int x = RanNum();
	int y = RanNum();

	for (int i = 0; i < 5; i++) {
		rooms[x][y] = "I";
		cout << "beep";
		cout << x << "   " << y;
	}
	cout << " Map w/ Items \n";
	for (int i = 0; i < 10; i++) {
		for (int o = 0; o < 10; o++) {
			cout << rooms[i][o] << " ";
		}
		cout << "\n";
	}
}
