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
void Item::Description(string desc) const {
	cout << desc;
}

// to use an item
void Item::Use(string status) {
	cout << "Player Has used. It is " << status;
}
