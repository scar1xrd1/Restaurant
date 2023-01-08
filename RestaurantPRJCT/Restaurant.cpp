#include "Restaurant.h"

Restaurant::Restaurant()
{
	generate_table();
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
		if (table[i] == 1) cout << "Стол занят\n";
		else cout << "Стол свободен\n";
	}
}

bool Restaurant::check_table(int id)
{
	if (table[id] == 0) return true;
	return false;
}