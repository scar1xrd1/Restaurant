#pragma once
#include "Visitor.h"
#include "Waiter.h"
#include <Windows.h>

class Restaurant
{
	
	string** menu_buffet;
	int table[7];

public:
	Restaurant();

	void generate_table();
	void show_table();

	bool check_table(int);
};