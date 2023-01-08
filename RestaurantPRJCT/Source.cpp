#include "Visitor.h"
#include "Accountant.h"
#include "Restaurant.h"

int main()
{
	system("chcp 1251");
	system("cls");
	string userS;
	int u = 0;

	cout << "\nВы зашли в ресторан \"БАНДЕРА\"\n\n";

	Visitor user(0);
	Accountant check;
	Restaurant rest;

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

	//// TEST

	//cout << "БАЛАНС\t" << user.Balance() << endl;
	//cout << "ЦЕНА\t" << 500 << endl;

	//cout << "ДЕНЕГ\t";
	//if (check.is_enough_money(user.Balance(), 500)) cout << "ХВАТАЕТ\n";
	//else cout << " НЕ ХВАТАЕТ\n";

	//// TEST

	while (true) // table selection
	{
		cout << "Выберите столик\n";
		rest.show_table();
		cout << "--> ";
		while (!(cin >> u) || (cin.peek() != '\n')) { cin.clear(); while (cin.get() != '\n'); cout << "\nТолько цифрами!\n\n--> "; }
		system("cls");

		if (u >= 1 && u <= 7)
		{
			if (rest.check_table(u-1)) break;
			else cout << "\nДанный столик занят!\n\n";
		}
		else cout << "\nНеверный выбор! Введите число от 1 до 7\n\n";
	}

	while (true)
	{
		cout << "Ваш столик:\t" << rest.show_idTable()+1 << endl;
		cout << "Ваши средства:\t" << user.Balance() << " грн\n1. Посмотреть меню\n2. Пойти к бармену\n3. Кушать\n4. Уйти\n--> ";
		cin >> userS;
		system("cls");

		if (userS == "1")
		{
			rest.show_menu();
		}
		else if (userS == "2")
		{
			// barmen
		}
		else if (userS == "3")
		{
			// eat
		}
		else if (userS == "4")
		{
			cout << "\nС Вами было приятно иметь дело, ждём Вас снова!\n\n";
			break;
		}
	}
}