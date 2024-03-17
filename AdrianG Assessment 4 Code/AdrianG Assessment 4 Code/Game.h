#pragma once
#include <string>
#include "String_Utility.h"

using namespace std;

class Game
{
public:
	Game();
	Game(string name);
	~Game();

public:
	void GameStart();
	void Run();
	void NextTurn();

private:

	bool isStart;

	string gameName;
	//string rooms[10][10] = { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	//						 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	//						 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	//						 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	//						 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	//						 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	//						 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	//						 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	//						 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	//						 { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} };
	//					
};

