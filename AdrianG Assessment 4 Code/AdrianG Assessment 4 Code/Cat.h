#pragma once
#include "Item.h"

#include <iostream>
#include <string>

using namespace std;

class Cat : public Item
{
	// constructor and destructor
public:
	Cat();
	Cat(string c_name, int c_id);
	~Cat();

	// functions
public:
	virtual void Description(string desc);
	virtual void Use(bool status, int count);


	// variables
public:
	string cat_name;

	int cat_ID;

	bool purring;
};

