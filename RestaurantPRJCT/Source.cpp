#include <iostream>
using namespace std;

class Visitor
{
	int balance, hunger;

public:
	Visitor()
	{
		srand(time(0));
		balance = 1000 + rand() % (10000 - 1000 + 1); // Рандомится баланс посетителя
		hunger = 5 + rand() % (10 - 5 + 1); // Переменная, отвечающая за голод. 
	}

	int getBalance() { return balance; } // Функции для получения значений
	int getHunger() { return hunger; }

	int set(int value, int num) // Функция для изменения значений 1 - изменить баланс, 2 - голод
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