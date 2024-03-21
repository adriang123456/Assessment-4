// AdrianG Assessment 4 Code.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Game.h"
#include "Room.h"

using namespace std;


int main()
{
	Game* New_Game = new Game("Game 1");

	New_Game->GameStart();
	New_Game->Run();

	while (New_Game->isStart != 0) {
		New_Game->Move();
		New_Game->Next_Turn();
	}


	delete New_Game;
	New_Game = nullptr;
}

