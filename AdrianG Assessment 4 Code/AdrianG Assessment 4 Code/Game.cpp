#include "Game.h"
#include "String_Utility.h"
#include "Room.h"
#include "Player.h"

#include <iostream>
#include <string>

using namespace std;

Game::Game() {
}
Game::Game(string name) {
	gameName = name;
}
Game::~Game() {
	//delete Advent_1;
	//Advent_1 = nullptr;

	//delete Room_Info;
	//Room_Info = nullptr;

	//delete Player_1;
	//Player_1 = nullptr;
}

String* Advent_1 = new String("start");

Room* Room_Info = new Room();
Player* Player_1 = new Player( 9, 0, "John" );

// function that asks the player if they'd like to start the game or quit
void Game::GameStart() {
	cout << "Welcome To This Text Based Adventure Game" << endl << "Would you like to start or quit?\n";

	Advent_1->Read();

	if (Advent_1->operator==("start") == true) {
		cout << "Game Has Started\n" << "\n\n";
		isStart = true;
	}
	else if (Advent_1->operator==("start") != true) { cout << "Player Has Quit\n"; isStart = false; }
}

// Makes the map with random item locations
void Game::Makemap_W_Item() {
	srand((unsigned)time(NULL));
	cout << endl;

	// for a random x coordinate
	for (int i = 0; i < 4; i++) {
		random_x = rand() % 10;

		// for a random y coordinate
		for (int i = 0; i < 4; i++) {
			random_y = rand() % 10;

			// adding random items
			int ran_item = rand() % 3;
			switch (ran_item)
			{
			case 1:
				item_initial = "L";
				break;

			case 2:
				item_initial = "B";

				break;

			case 3:
				item_initial = "C";
				break;
			}

			rooms[random_y][random_x] = item_initial;
		}
	}

	// player introduced into the map
	rooms[Player_1->p_x][Player_1->p_y] = "X";

	cout << "    Map w/ Items \n";
	for (int i = 0; i < 10; i++) {
		for (int o = 0; o < 10; o++) {
			cout << rooms[i][o] << " ";
		}
		cout << "\n";
	}
	cout << "^ \n^---- player starts here.";
}

// if the player has selected to start the game, will spawn the map
void Game::Run() {  
	if (isStart == true) {Makemap_W_Item();}
}

// the function which lets the player move around the map
void Game::Move() {
	cout << "\n\n\n" << "Where would you like to move?" << "\n";
	cout << "\n" << "1: West  2: North  3: East  4: South  5:Pickup Item  6: Use Item  7:Use Spell  0: Quit" << endl;
	
	cin >> g_input;
	Player_1->P_Action(g_input);
	
	// checking if the player is allowed to move to the requested room
	if (Player_1->p_x == -1) { 
		Player_1->p_x = 0;
		Player_1->P_Action(g_input);
	}
	if (Player_1->p_y == -1) { 
		Player_1->p_y = 0;
		Player_1->P_Action(g_input);
	}

	if (Player_1->p_x == 10) { 
		Player_1->p_x = 9;
		Player_1->P_Action(g_input);
	}
	if (Player_1->p_y == 10) { 
		Player_1->p_y = 9;
		Player_1->P_Action(g_input);
	}

	if (Player_1->p_action == 0) { isStart = false; }
	//cout << "\n\n\n" << Player_1->p_x << "\n\n\n";
}

void Game::Next_Turn() {

	if (rooms[Player_1->p_x][Player_1->p_y] == "I") {
		
	}


	rooms[Player_1->p_x][Player_1->p_y] = "x";

	cout << endl << "Turn --- " << t_counter << endl;
	for (int i = 0; i < 10; i++) {
		for (int o = 0; o < 10; o++) {
			cout << rooms[i][o] << " ";
		}
		cout << "\n";
	}
	t_counter += 1;
}