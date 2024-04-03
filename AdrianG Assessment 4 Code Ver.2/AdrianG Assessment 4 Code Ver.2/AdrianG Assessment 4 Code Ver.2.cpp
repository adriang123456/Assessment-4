// AdrianG Assessment 4 Code.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Game.h"
#include "Room.h"

using namespace std;


int main()
{
	// creating game class
	Game* New_Game = new Game("Game 1");

	// start of the game
	New_Game->GameStart();
	New_Game->Run();

	// while loop to make it turn based
	while (New_Game->isStart != 0) {
		New_Game->Move();
		//New_Game->Item_info();
		if (New_Game->isStart != 0) {
			New_Game->Next_Turn();
		}
	}

	// calling function to delete other classes class pointers and assigning them to null
	New_Game->Game_End();

	// deleting game class
	delete New_Game;
	New_Game = nullptr;
}

