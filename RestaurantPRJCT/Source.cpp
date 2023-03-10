#include "Accountant.h"
#include "Restaurant.h"

int main()
{
	system("chcp 1251");
	system("cls");
	int userS;
	int u = 0;

	cout << "\n?? ????? ? ???????? \"???????\"\n\n";

	Visitor user;
	Accountant check;
	Restaurant rest;

	while (true) // balance selection
	{
		bool flag = false;
		cout << "??????? ?????\n1. ????????? ??????\n2. ???? ??????\n--> ";
		while (!(cin >> userS) || (cin.peek() != '\n')) {
			cin.clear(); while (cin.get() != '\n'); cout << "\nError\n";
		}
		system("cls");

		switch (userS) {
		case 1:
			flag = true;
			break;
		case 2:
			while (true) {
				cout << "??????? ?????????? ????? --> ";
				while (!(cin >> u) || (cin.peek() != '\n')) { cin.clear(); while (cin.get() != '\n'); cout << "\n?????? ???????!\n\n--> "; }
				system("cls");
				if (u > 0) break;
				else cout << "\n????? ????? ?????? ? ?????????\n\n--> ";
			}
			user.set(u);
			flag = true;
			break;
		}

		if (flag) break;
	}

	//// TEST

	

	//// TEST

	while (true) // table selection
	{
		cout << "???????? ??????\n";
		rest.show_table();
		cout << "--> ";
		while (!(cin >> u) || (cin.peek() != '\n')) { cin.clear(); while (cin.get() != '\n'); cout << "\n?????? ???????!\n\n--> "; }
		system("cls");

		if (u >= 1 && u <= 7)
		{
			if (rest.check_table(u - 1)) break;
			else cout << "\n?????? ?????? ?????!\n\n";
		}
		else cout << "\n???????? ?????! ??????? ????? ?? 1 ?? 7\n\n";
	}

	while (true) // menu
	{
		bool flag = false;

		cout << "??? ??????:\t" << rest.show_idTable() + 1 << endl;
		cout << "???? ????????:\t" << user.Balance() << " ???\n1. ?????????? ????\n2. ????? ? ???????\n3. ??????\n4. ????\n--> ";
		while (!(cin >> userS) || (cin.peek() != '\n')) {
			cin.clear(); while (cin.get() != '\n'); cout << "\nError\n";
		}
		system("cls");

		switch (userS) {
		case 1:
			while (true)
			{
				flag = false;
				//system("cls");
				cout << "???????? ?????????\n";
				rest.show_menu(0);
				while (!(cin >> userS) || (cin.peek() != '\n')) {
					cin.clear(); while (cin.get() != '\n'); cout << "\nError\n";
				}
				system("cls");

				switch (userS) {
				case 1:
					//eat
					while (1) {
						system("cls");
						rest.foodCard();

						cout << "--> ";
						while (!(cin >> userS) || (cin.peek() != '\n')) {
							cin.clear(); while (cin.get() != '\n'); cout << "\nError\n";
						}
						if (userS == 6) break;
						else if (userS >= 1 && userS <= 5 && 
							check.is_enough_money(user.Balance(), rest.getTablePrice() + stoi(rest.menu_food[userS - 1][2]))) {//if the customer has >= money than a total table price + product cost
							
							cout << "food #" << userS - 1;
							rest.add_to_table_user(stoi(rest.menu_food[userS - 1][1]), stoi(rest.menu_food[userS - 1][2]));
							break;
						}
						else cout << "????, ?? ?? ????" << endl;
					}
					break;
				case 2:
					//drink
					while (1) {
						system("cls");
						rest.drinksCard();

						cout << "--> ";
						while (!(cin >> userS) || (cin.peek() != '\n')) {
							cin.clear(); while (cin.get() != '\n'); cout << "\nError\n";
						}
						if (userS == 6) break;
						else if (userS >= 1 && userS <= 5 &&
							check.is_enough_money(user.Balance(), rest.getTablePrice() + stoi(rest.menu_drinks[userS - 1][2]))) {//if the customer has >= money than a total table price + product cost

							cout << "food #" << userS - 1;
							rest.add_to_table_user(stoi(rest.menu_drinks[userS - 1][1]), stoi(rest.menu_drinks[userS - 1][2]));
							break;
						}
						else cout << "????, ?? ?? ????" << endl;
					}
					break;
				case 3:
					flag = true;
					break;
				}

				if (flag) {
					flag = false;
					break;
				}
				
			}
			break;
		case 2:
			//barmen
			while (1) {
				system("cls");
				rest.barCard();

				cout << "--> ";
				while (!(cin >> userS) || (cin.peek() != '\n')) {
					cin.clear(); while (cin.get() != '\n'); cout << "\nError\n";
				}
				if (userS == 6) break;
				else if (userS >= 1 && userS <= 5 &&
					check.is_enough_money(user.Balance(), rest.getTablePrice() + stoi(rest.menu_barmen[userS - 1][2]))) {//if the customer has >= money than a total table price + product cost

					cout << "food #" << userS - 1;
					rest.add_to_table_user(stoi(rest.menu_barmen[userS - 1][1]), stoi(rest.menu_barmen[userS - 1][2]));
					break;
				}
				else cout << "????, ?? ?? ????" << endl;
			}
			break;
		case 3:
			if (!rest.is_empty()) // eat from table
			{
				cout << "??? ?????:\t" << user.Hunger() << endl;
				//visitor.eat()
				if(!user.eat(rest.getTableHunger())) cout << "?? ????!" << endl;
				rest.eat();
			}
			else cout << "\n??? ???? ????!\n\n";
			break;
		case 4:
			cout << "????? ?????????: " << rest.getTablePrice() << " ???" << endl;
			cout << "???????: " << user.Balance() - rest.getTablePrice() << " ???" << endl;
			cout << "\n? ???? ???? ??????? ????? ????, ???? ??? ?????!\n\n";
			flag = true;
			break;
		}
		if (flag) break;
	}
}