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
		cout << "������� �����\n1. ��������� ������\n2. ���� ������\n--> ";
		cin >> userS;
		system("cls");

		if (userS == "1") break;
		else if (userS == "2")
		{
			while (true) {
				cout << "������� ���������� ����� --> ";
				while (!(cin >> u) || (cin.peek() != '\n')) { cin.clear(); while (cin.get() != '\n'); cout << "\n������ �������!\n\n--> "; }
				system("cls");
				if (u > 0) break;
				else cout << "\n����� ����� ������ � ��������?\n\n--> ";
			}
			user.set(u);
			break;
		}
	}

	// TEST

	cout << "������\t" << user.Balance() << endl;
	cout << "����\t" << 500 << endl;

	cout << "�����\t";
	if (check.is_enough_money(user.Balance(), 500)) cout << "�������\n";
	else cout << " �� �������\n";

	// TEST
}