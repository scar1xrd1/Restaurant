#include "Visitor.h"

Visitor::Visitor() {
	srand(time(0));

	hunger = 3 + rand() % (9 - 3 + 1);

	balance = 250 + rand() % (10000 - 250 + 1);
}

Visitor::Visitor(int value) { balance = value; }// if you entered the balance


bool Visitor::eat(int unit_food) // is the visitor hungry?
{
	if (unit_food < hunger) {
		
		hunger -= unit_food;
		return true;
	}
	return false;
}

int Visitor::Balance() // get balance
{
	return balance;
}

int Visitor::Hunger() // get hunger
{
	return hunger;
}

void Visitor::set(int number)
{
	balance = number;
}