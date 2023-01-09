#pragma once
#include "Visitor.h"
#include "Waiter.h"
#include <Windows.h>

class Restaurant
{
	string menu_food[5][3]; // 0 - name_product, 1 - hunger_cost, 2 - price
	string menu_drinks[5][3]; 
	string menu_barmen[5][3]; 
	int table[7];
	int user_table;

	string table_user[15][2];
	int len_table_user;

public:
	Restaurant();

	void fill_menu();

	void generate_table();
	void show_table();
	void show_menu(int);

	bool check_table(int);
	int show_idTable() { return user_table; }

	int eat(int);
	bool is_empty();
	void add_to_table_user(int, int);
};