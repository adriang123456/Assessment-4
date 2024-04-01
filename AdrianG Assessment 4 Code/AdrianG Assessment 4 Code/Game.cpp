#include "Game.h"
#include "String_Utility.h"
#include "Player.h"

#include <iostream>
#include <string>

using namespace std;

Game::Game() {
	String* Game_String = new String("start");
	String* Game_String_1 = new String();

	Room* Room_Info = new Room();
	Player* Player_1 = new Player(9, 0, "John");
}
Game::Game(string name) {
	gameName = name;
}
Game::~Game() {
	delete Game_String;
	Game_String = nullptr;

	delete Game_String_1;
	Game_String_1 = nullptr;

	delete Room_Info;
	Room_Info = nullptr;

	delete Player_1;
	Player_1 = nullptr;
}

String* Game_String = new String("start");
String* Game_String_1 = new String();

Room* Room_Info = new Room();
Player* Player_1 = new Player(9, 0, "John");

// function that asks the player if they'd like to start the game or quit
void Game::GameStart() {
	cout << "Welcome To This Text Based Adventure Game" << endl << "Would you like to start or quit?\n";

	Game_String->Read();

	if (Game_String->operator==("start") == true) {
		cout << "Game Has Started\n" << "\n\n";
		isStart = true;
	}
	else if (Game_String->operator==("start") != true) { cout << "Player Has Quit\n"; isStart = false; }
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
			case 0:
				item_initial = "L";
				break;

			case 1:
				item_initial = "B";

				break;

			case 2:
				item_initial = "C";
				break;

			default:
				break;
			}

			rooms[random_y][random_x] = item_initial;
			rooms_w_i[random_y][random_x] = item_initial;
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
	if (isStart == true) { Makemap_W_Item(); Player_1->Add_To_SPBook(); }
}

// the function which lets the player move around the map
void Game::Move() {
	cout << "\n\n\n" << "Where would you like to move?" << "\n";
	cout << "\n" << "1: West  2: North  3: East  4: South 0: Quit" << endl;
	
	//   5:Use Item  6:Use Spells
	cin >> g_input;
	Player_1->P_Action(g_input);
	cout << endl;
	
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

	if (Player_1->p_action == 0) { isStart = false;}
}

// to get an item description from current room
void Game::Item_info() {
	Room_Info->Item_Description(rooms_w_i[Player_1->p_x][Player_1->p_y]);
}

// to continue the game after the first turn
void Game::Next_Turn() {
	// check to see what is in the room and printing a description of what is in it if anything
	if (rooms_w_i[Player_1->p_x][Player_1->p_y] == "O") {
		Room_Info->Room_Description("This room is empty ", rooms[Player_1->p_x][Player_1->p_y]);
	}
	else if (rooms_w_i[Player_1->p_x][Player_1->p_y] == "L") {
		Room_Info->Room_Description("This room has a ", rooms[Player_1->p_x][Player_1->p_y]);
		Room_Info->Item_Description(rooms_w_i[Player_1->p_x][Player_1->p_y]);
	}
	else if (rooms_w_i[Player_1->p_x][Player_1->p_y] == "B") {
		Room_Info->Room_Description("This room has a ", rooms[Player_1->p_x][Player_1->p_y]);
		Room_Info->Item_Description(rooms_w_i[Player_1->p_x][Player_1->p_y]);
	}
	else if (rooms_w_i[Player_1->p_x][Player_1->p_y] == "C") {
		Room_Info->Room_Description("This room has a ", rooms[Player_1->p_x][Player_1->p_y]);
		Room_Info->Item_Description(rooms_w_i[Player_1->p_x][Player_1->p_y]);
	}
	else if (rooms_w_i[Player_1->p_x][Player_1->p_y] == "x") {
		Room_Info->Room_Description("This room has been visited", rooms[Player_1->p_x][Player_1->p_y]);
	}
	else if (rooms_w_i[Player_1->p_x][Player_1->p_y] == "X") {
		Room_Info->Room_Description("This room is your starting room", rooms[Player_1->p_x][Player_1->p_y]);
	}

	// to show where the player has been
	rooms[Player_1->p_x][Player_1->p_y] = "x";

	// to print updated map
	cout << "\n\n" << "Turn --- " << t_counter << endl;
	for (int i = 0; i < 10; i++) {
		for (int o = 0; o < 10; o++) {
			cout << rooms[i][o] << " ";
		}
		cout << "\n";
	}
	t_counter += 1;

	// asks what you would like to do in the room you've moved to
	cout << "\n\n" << "What would you like to do in this room?" << "\n" << "5:Use Item  6:Use Spells  7:Do Nothing" << endl;
	cin >> g_input;
	Player_1->P_Action(g_input);
	
	// checks to see if the players wants to do anything in the room
	if (Player_1->p_action != 7) {

		// checks to see if the player wants to use an item
		if (Player_1->p_action == 5) {
			cout << endl;
			Room_Info->Item_Use(rooms_w_i[Player_1->p_x][Player_1->p_y]);
		}

		// checks to see if the player wants to use a spell
		else if (Player_1->p_action == 6) {
			cout << "\n\n" << "What would you like to do" << endl;
			cout << "'Cast' - 'Compare' - 'Spell X' - 'Add'" << endl;

			Game_String_1->Read();

			// code to cast a spell
			if (Game_String_1->operator==("Cast") == true) {
				cout << "What spell would you like to cast?" << endl << "\n\n";
				for (int i = 0; i < 5; i++) {
					cout << Player_1->spells[i] << endl;
				}
				cout << "\n\n";
				Game_String_1->Read();
				if (Game_String_1->operator== ("Fireball") == true); {
					Player_1->Cast_Spell(Player_1->spells[0], Player_1->spells_dmg[0]);
					for (int i = 0; i < 10; i++) {
						for (int o = 0; o < 10; o++) {
							cout << rooms[i][o] << " ";
						}
						cout << "\n";
					}
				}
				if (Game_String_1->operator== ("Frostbite") == true); {
					Player_1->Cast_Spell(Player_1->spells[1], Player_1->spells_dmg[1]);

					for (int i = 0; i < 10; i++) {
						for (int o = 0; o < 10; o++) {
							cout << rooms[i][o] << " ";
						}
						cout << "\n";
					}
				}
				if (Game_String_1->operator== ("Healing") == true); {
					Player_1->Cast_Spell(Player_1->spells[2], Player_1->spells_dmg[2]);

					for (int i = 0; i < 10; i++) {
						for (int o = 0; o < 10; o++) {
							cout << rooms[i][o] << " ";
						}
						cout << "\n";
					}
				}
				if (Game_String_1->operator== ("Teleport") == true); {
					Player_1->Cast_Spell(Player_1->spells[3], Player_1->spells_dmg[3]);

					for (int i = 0; i < 10; i++) {
						for (int o = 0; o < 10; o++) {
							cout << rooms[i][o] << " ";
						}
						cout << "\n";
					}
				}
				if (Game_String_1->operator== ("MagicMissile") == true); {
					Player_1->Cast_Spell(Player_1->spells[4], Player_1->spells_dmg[4]);

					for (int i = 0; i < 10; i++) {
						for (int o = 0; o < 10; o++) {
							cout << rooms[i][o] << " ";
						}
						cout << "\n";
					}
				}
			}

			// code to compare spells
			else if (Game_String_1->operator==("Compare") == true) {
				cout << "What spell would you like to compare?" << endl << "\n\n";
				cin >> gs_input;
				cin >> gs_input_1;

				Player_1->Compare_Spells(gs_input, gs_input_1);
			}

			// code to find if the player knows a spell
			else if (Game_String_1->operator==("Spell X") == true) {
				cout << "What spell would you like to find?" << endl << "\n\n";
				for (int i = 0; i < 5; i++) {
					cout << i << ": " << Player_1->spells[i] << endl;
				}
				cin >> g_input;
				Player_1->Find_Spell(0, 5, g_input);
			}

			// if the input is not a recognised input
			else { cout << "Invalid Input" << endl << "\n\n"; }
		}
	}
}