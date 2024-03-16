#include "Game.h"
#include "String_Utility.h"
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
		cout << "Game Has Started";
		isStart = true;
	}
}
