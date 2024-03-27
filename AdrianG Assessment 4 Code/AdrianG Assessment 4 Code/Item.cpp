#include "Item.h"

#include <iostream>
#include <string>

using namespace std;

// constructor and destructor
Item::Item() {
}
Item::~Item() {
}

// to print a description
void Item::Description(string desc){
	cout << desc << "This is an item description";
}

// to use an item
void Item::Use(bool status, int count) {
	cout << "Player has used an item" << status;
}
