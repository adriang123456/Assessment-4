#include "Box_of_Donuts.h"

#include <iostream>
#include <string>

using namespace std;

// constructors and destructors
Box_of_Donuts::Box_of_Donuts() {
}
Box_of_Donuts::Box_of_Donuts(string b_name, int b_id) {
}
Box_of_Donuts::~Box_of_Donuts() {
}

// the function to overide the Item description
void Box_of_Donuts::Description(string desc) {
	cout << desc;
}

void Box_of_Donuts::Use(bool status, int count) {
	if (count > 0) {
		cout << "Player has eaten this box of donuts :)";
	}
	else if (count < 1) { cout << "This box of donuts is already empty :("; }
}

