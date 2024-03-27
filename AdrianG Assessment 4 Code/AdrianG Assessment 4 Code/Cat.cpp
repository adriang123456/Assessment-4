#include "Cat.h"
#include "Item.h"

#include <iostream>
#include <string>

using namespace std;

// constructor and destructor
Cat::Cat() {
}
Cat::Cat(string c_name, int c_id) {
	cat_name = c_name;
	cat_ID = c_id;
}
Cat::~Cat() {
}

// the function to overide the Item description function
void Cat::Description(string desc) {
	cout << desc;
}

// the function to overide the Item use function
void Cat::Use(bool status, int count) {
	if (status == 0) {
		cout << "Player has played with the cat. The cat is now purring :)";
	}
	else if (status == 1) { cout << "The player has scared the cat. It is no longer purring :("; }
}



