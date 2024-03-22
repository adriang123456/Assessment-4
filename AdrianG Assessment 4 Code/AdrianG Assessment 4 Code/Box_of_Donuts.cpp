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

void Box_of_Donuts::Description(string desc) {
	cout << desc;
}

void Box_of_Donuts::BodDesc(string b_des) {
	Item::Description(b_des);
}

void Box_of_Donuts::BODuse(string status) {
	Item::Use(status);
}
