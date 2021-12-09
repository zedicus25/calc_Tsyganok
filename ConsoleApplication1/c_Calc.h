#pragma once
class c_Calc
{
private:
	int x;
	int y;
public:
	c_Calc();
	c_Calc(int x, int y);

	int myPlus();
	int myMinus();
	int myMultiply();
	int myDivide();
	int myMax();
	int myMin();

	bool areEqual();	
	bool areNotEqual();
};

