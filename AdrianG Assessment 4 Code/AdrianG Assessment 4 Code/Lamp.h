#pragma once
#include "Item.h"

#include <iostream>
#include <string>

	using namespace std;

class Lamp : public Item
{
	// constructor and destructor
public:
	Lamp();
	Lamp(string l_name, int l_id);
	~Lamp();

	// functions
public:
	virtual void Description(string desc);
	virtual void Use(bool status, int count);

	// variables
public:
	string lamp_name;

	int lamp_ID;

	bool on_o_off;
};
