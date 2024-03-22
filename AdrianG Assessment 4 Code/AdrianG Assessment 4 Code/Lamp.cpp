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

void Lamp::LampDesc(string l_des) {
	Item::Description(l_des);
}

void Lamp::Lampuse(string info) {
	Item::Use(info);
}
