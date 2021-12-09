#include <iostream>
#include "c_Calc.h"
using namespace std;
int main()
{
    c_Calc calc(5,2);
    cout<<"+ " << calc.myPlus()<< endl;
    cout<<"- " << calc.myMinus() << endl;
    cout<< "* " << calc.myMultiply() << endl;
    cout<< "/ " << calc.myDivide() << endl;
    cout<<"max " << calc.myMax() << endl;
    cout<< "min " << calc.myMin() << endl;
    cout<< "equal " << calc.areEqual() << endl;
    cout<< "not equal " << calc.areNotEqual() << endl;
}
