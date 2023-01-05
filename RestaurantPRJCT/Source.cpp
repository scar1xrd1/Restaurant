#include "Visitor.h"

int main()
{
	system("chcp 1251");
	system("cls");
	
	// TEST

	Visitor user1(0); // random balance
	cout << "rand BALANCE\t" << user1.Balance() << endl;
	
	Visitor user2(5000); // set balance
	cout << "set BALANCE\t" << user2.Balance() << endl;

	// TEST
}