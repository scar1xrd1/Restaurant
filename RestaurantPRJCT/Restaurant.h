#pragma once
#include "Visitor.h"
#include "Waiter.h"
#include <Windows.h>

class Restaurant
{
	string** menu_buffet;
	int table[7];
	int user_table;

public:
	Restaurant();

	void generate_table();
	void show_table();
	void show_menu();

	bool check_table(int);
	int show_idTable() { return user_table; }
};