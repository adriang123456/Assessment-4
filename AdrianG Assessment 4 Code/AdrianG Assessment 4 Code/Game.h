#pragma once
#include <string>
#include "String_Utility.h"

using namespace std;

class Game
{
	// constructors and destructors
public:
	Game();
	Game(string name);
	~Game();

	// functions
public:
	void GameStart();
	void Run();

	void Makemap_W_Item();
	
	void Move();
	void Item_info();
	void Next_Turn();

	// variables
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
	string rooms_w_i[10][10] = { { "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"},
					 { "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"},
					 { "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"},
					 { "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"},
					 { "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"},
					 { "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"},
					 { "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"},
					 { "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"},
					 { "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"},
					 { "O", "O", "O", "O", "O", "O", "O", "O", "O", "O"} };
	string item_initial;

	bool isStart;

	// private variables
private:

	int t_counter = 0;
	int g_input;

	string gameName;
	
};

