#include "Game.h"
#include "String_Utility.h"
#include "Room.h"

#include <iostream>
#include <string>

using namespace std;

Game::Game() {
	cout << "Hello c";
}
Game::Game(string name) {
	cout << "Hello";
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
	else { cout << "Player Has Quit"; }
}

Room* NewRoom = new Room();
void Game::Run() {  
	if (isStart == true) { NewRoom->Makemap(); }
}
