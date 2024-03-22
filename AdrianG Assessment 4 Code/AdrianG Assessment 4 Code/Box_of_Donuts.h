#pragma once
#include "Item.h"

#include <iostream>
#include <string>

using namespace std;

class Box_of_Donuts : public Item
{
	// constructor and destructor
public:
	Box_of_Donuts();
	Box_of_Donuts(string b_name, int b_id);
	~Box_of_Donuts();

	// functions
public:
	virtual void Description(string desc);

	void BodDesc(string b_des);
	void BODuse(string info);

	// variables
public:
	string Box_name;

	int Box_ID;
};