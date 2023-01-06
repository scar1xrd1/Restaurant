#include "Visitor.h"
#include "Accountant.h"

int main()
{
	system("chcp 1251");
	system("cls");
	string userS;
	int u = 0;

	Visitor user(0);
	Accountant check;

	while (true) // balance selection
	{
		cout << "Введите цифру\n1. Рандомный баланс\n2. Свой баланс\n--> ";
		cin >> userS;
		system("cls");

		if (userS == "1") break;
		else if (userS == "2")
		{
			while (true) {
				cout << "Введите количество денег --> ";
				while (!(cin >> u) || (cin.peek() != '\n')) { cin.clear(); while (cin.get() != '\n'); cout << "\nТолько цифрами!\n\n--> "; }
				system("cls");
				if (u > 0) break;
				else cout << "\nЗачем тогда пришли в ресторан?\n\n--> ";
			}
			user.set(u);
			break;
		}
	}

	// TEST

	cout << "БАЛАНС\t" << user.Balance() << endl;
	cout << "ЦЕНА\t" << 500 << endl;

	cout << "ДЕНЕГ\t";
	if (check.is_enough_money(user.Balance(), 500)) cout << "ХВАТАЕТ\n";
	else cout << " НЕ ХВАТАЕТ\n";

	// TEST
}