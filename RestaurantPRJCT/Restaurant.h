#pragma once
#include "Visitor.h"
#include <Windows.h>
#include <string>
#include <iostream>
class Restaurant
{
	 
	int table[7];
	int user_table;

	string table_user[15][2];
	int len_table_user;

	int tableHunger, tablePrice;

public:
	string menu_food[5][3]; // 0 - name_product, 1 - hunger_cost, 2 - price
	string menu_drinks[5][3];
	string menu_barmen[5][3];
	

	Restaurant();

	void fill_menu();

	void foodCard();
	void barCard();
	void drinksCard();

	void generate_table();
	void show_table();
	void show_menu(int);

	bool check_table(int);
	int show_idTable() { return user_table; }

	void eat();
	bool is_empty();
	int getTableHunger() { return tableHunger; }
	int getTablePrice() { return tablePrice; }

	void add_to_table_user(int, int);
};