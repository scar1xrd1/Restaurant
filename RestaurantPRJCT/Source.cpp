#include <iostream>
using namespace std;

class Visitor
{
	int balance, hunger;

public:
	Visitor()
	{
		balance = 1000 + rand() % (10000 - 1000 + 1); // ���������� ������ ����������
		hunger = 5 + rand() % (10 - 5 + 1); // ����������, ���������� �� �����. 
	}

	int getBalance() { return balance; } // ������� ��� ��������� ��������
	int getHunger() { return hunger; }

	int set(int value, int num) // ������� ��� ��������� �������� 1 - �������� ������, 2 - �����
	{
		if (value == 1) balance = num;
		else if (value == 2) hunger = num;
	}
}

int main()
{
	system("chcp 1251");
	system("cls");
	// empty


}