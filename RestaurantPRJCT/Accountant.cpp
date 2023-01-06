#include "Accountant.h"

bool Accountant::is_enough_money(int money, int price)
{
	if (money >= price) return true;
	return false;
}