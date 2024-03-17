#include "Room.h"
#include <iostream>

using namespace std;

Room::Room() {
}

Room::~Room() {
}

void Room::Makemap()
{
	for (int i = 0; i < 10; i++) {
		for (int o = 0; o < 10; o++) {
			cout << rooms[i][o];
		}
	}
	
}
