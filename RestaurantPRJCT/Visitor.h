#pragma once
#include <iostream>
using namespace std;

class Visitor
{
	int balance, hunger;

public:
	Visitor(int);
	bool eat(int);
	int Balance();
	int Hunger();
	void set(int);
};