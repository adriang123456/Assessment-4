#include "Game.h"
#include "String_Utility.h"
#include "Room.h"

#include <iostream>
#include <string>

using namespace std;

Game::Game() {
}
Game::Game(string name) {
	gameName = name;
}
Game::~Game() {
}

String* Advent_1 = new String("start");

void Game::GameStart() {
	cout << "Welcome To This Text Based Adventure Game" << endl << "Would you like to start or quit?\n";

	Advent_1->Read();

	if (Advent_1->operator==("start") == true) {
		cout << "Game Has Started\n" << "\n\n";
		isStart = true;
	}
	else { cout << "Player Has Quit\n"; }
}

void Game::Makemap_W_Item() { // figure out how to get a new random number
	srand((unsigned)time(NULL));
	cout << endl;

	// for a random x coordinate
	for (int i = 0; i < 4; i++) {
		random_x = rand() % 10;

		// for a random y coordinate
		for (int i = 0; i < 4; i++) {
			random_y = rand() % 10;

			rooms[random_y][random_x] = "I";
		}
	}
	rooms[9][0] = "X";

	cout << "    Map w/ Items \n";
	for (int i = 0; i < 10; i++) {
		for (int o = 0; o < 10; o++) {
			cout << rooms[i][o] << " ";
		}
		cout << "\n";
	}
	cout << "^ \n^---- player starts here.";
}


void Game::Run() {  
	if (isStart == true) {Makemap_W_Item();}
}
