// AdrianG Assessment 4 Code.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Game.h"

using namespace std;


int main()
{
	Game* New_Game = new Game("New Game 1");

	New_Game->GameStart();


	delete New_Game;
	New_Game = nullptr;
}

