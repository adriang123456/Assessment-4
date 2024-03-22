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

void Cat::CatDesc(string c_des) {
	Item::Description(c_des);
}

// the function to use the cat item
void Cat::Catuse(string status) {
	Item::Use(status);
}

