#pragma once
#include <string>

#include "String.h"
#include "Room.h"
#include "Player.h"

using namespace std;

class Game
{
	// constructors and destructors
public:
	Game();
	Game(string name);
	~Game();

	String* Game_String;
	String* Game_String_1;

	Room* Room_Info;
	Player* Player_1;

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

	string gs_input;
	string gs_input_1;

	string gameName;

};