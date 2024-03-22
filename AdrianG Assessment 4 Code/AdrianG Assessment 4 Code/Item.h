#pragma once
#include <iostream>
#include <string>

using namespace std;

class Item
{

	// constructors and destructors
public:
	Item();
	~Item();

	// functions
public:

	virtual void Description(string desc);
	virtual void Use(string status);

	//variables
public:
	string d_script;
	string state;

};


