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
	void Makemap_W_Item();
	void NextTurn();

public:
	int random_x;
	int random_y;

	string rooms[10][10] = { { "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"},
						 { "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"},
						 { "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"},
						 { "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"},
						 { "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"},
						 { "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"},
						 { "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"},
						 { "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"},
						 { "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"},
						 { "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"} };

private:

	bool isStart;

	string gameName;
};

