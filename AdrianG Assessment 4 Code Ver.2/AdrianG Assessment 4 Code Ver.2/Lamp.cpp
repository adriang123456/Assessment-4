#include "Lamp.h"
#include "Item.h"

#include <iostream>
#include <string>

using namespace std;

Lamp::Lamp() {
}
Lamp::Lamp(string l_name, int l_id) {
}
Lamp::~Lamp() {
}

// the function to overide the Item description
void Lamp::Description(string desc) {
	cout << desc;
}

void Lamp::Use(bool status, int count) {
	if (status == 0) {
		cout << "Lamp has been turned on";
	}
	else if (status == 1) { cout << "Lamp has been turned off"; }
}