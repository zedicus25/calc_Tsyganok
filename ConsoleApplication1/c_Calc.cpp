#include "c_Calc.h"
#include <iostream>

c_Calc::c_Calc()
{
	this->x = 0;
	this->y = 1;
}

c_Calc::c_Calc(int x, int y)
{
	this->x = x;
	this->y = y;
}

int c_Calc::myPlus()
{
	return this->x+this->y;
}

int c_Calc::myMinus()
{
	return this->x - this->y;
}

int c_Calc::myMultiply()
{
	return this->x*this->y;
}

int c_Calc::myDivide()
{
	if (this->y == 0) {
		std::cout << "Деление на ноль запрещенно" << std::endl;
		return 0;
	}
	return this->x / this->y;
}

int c_Calc::myMax()
{
	return this->x > this->x ? this->x : this->x;
}

int c_Calc::myMin()
{
	return this->x < this->x ? this->x : this->x;
}

bool c_Calc::areEqual()
{
	return this->x == this->y;
}

bool c_Calc::areNotEqual()
{
	return this->x != this->y;
}
