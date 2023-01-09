#include "Restaurant.h"

Restaurant::Restaurant()
{
	generate_table();
	len_table_user = 0;
	fill_menu();
}

void Restaurant::fill_menu()
{
	menu_food[0][0] = "���������� ����-����";
	menu_food[0][1] = "2";
	menu_food[0][2] = "90";
	
	menu_food[1][0] = "����� ����� � ������";
	menu_food[1][1] = "2";
	menu_food[1][2] = "250";
	
	menu_food[2][0] = "����� ����� � ������ BBQ";
	menu_food[2][1] = "3";
	menu_food[2][2] = "620";
	
	menu_food[3][0] = "���������� �������-�������";
	menu_food[3][1] = "1";
	menu_food[3][2] = "145";
	
	menu_food[4][0] = "������ \"�������\"";
	menu_food[4][1] = "1";
	menu_food[4][2] = "200";
	// -------------------------------------- //
	menu_drinks[0][0] = "�������� ����";
	menu_drinks[0][1] = "1";
	menu_drinks[0][2] = "70";

	menu_drinks[1][0] = "����-����";
	menu_drinks[1][1] = "1";
	menu_drinks[1][2] = "65";

	menu_drinks[2][0] = "���� �������";
	menu_drinks[2][1] = "1";
	menu_drinks[2][2] = "60";

	menu_drinks[3][0] = "��� �������� ����";
	menu_drinks[3][1] = "1";
	menu_drinks[3][2] = "70";

	menu_drinks[4][0] = "�������� ��������";
	menu_drinks[4][1] = "1";
	menu_drinks[4][2] = "120";
	// -------------------------------------- //
	menu_barmen[0][0] = "�������� ���� ���� 18 ����";
	menu_barmen[0][1] = "1";
	menu_barmen[0][2] = "1500";

	menu_barmen[1][0] = "������ �������";
	menu_barmen[1][1] = "1";
	menu_barmen[1][2] = "320";

	menu_barmen[2][0] = "������ 10 ����";
	menu_barmen[2][1] = "1";
	menu_barmen[2][2] = "230";

	menu_barmen[3][0] = "����� �����";
	menu_barmen[3][1] = "1";
	menu_barmen[3][2] = "150";

	menu_barmen[4][0] = "����-������";
	menu_barmen[4][1] = "1";
	menu_barmen[4][2] = "300";
}

void Restaurant::generate_table()
{
	srand(time(0));
	int i = 3 + rand() % (6 - 3 + 1);

	for (int k = 0; k < 7; k++) { table[k] = 0; }

	for (int j=0; j<i; j++)
	{
		int r = 0 + rand() % (6 - 0 + 1);
		if (table[r] == 0) { table[r] = 1; }
	}
}

void Restaurant::show_table()
{
	for (int i = 0; i < 7; i++)
	{
		cout << i + 1 << ". ";
		if (table[i] == 1) cout << "���� �����\n";
		else cout << "���� ��������\n";
	}
}

bool Restaurant::check_table(int id)
{
	user_table = id;
	if (table[id] == 0) return true;
	return false;
}

void Restaurant::show_menu(int value)
{
	if (value == 0)
	{
		cout << "1. ���\n2. �������\n3. �����\n--> ";
	}
}

int Restaurant::eat(int index)
{
	if (index < 0 || index > 15) return -1; // error

}

bool Restaurant::is_empty()
{
	if (len_table_user == 0) return true;
	return false;
}

void Restaurant::add_to_table_user(int i1, int i2)
{
	
}