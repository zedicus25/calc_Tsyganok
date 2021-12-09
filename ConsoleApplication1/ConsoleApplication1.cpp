#include <iostream>
using namespace std;
int main()
{
    std::cout << "Hello World!\n";
}
int plus(int a, int b) {
    return a + b;
}
int minus(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
int divide(int a, int b) {
    if (a == 0) {
        cout << "Деление на ноль запрещенно" << endl;
        return 0;
    }
    return a / b;
}
int max(int a, int b) {
    return a > b ? a : b;
}
int min(int a, int b) {
    return a < b ? a : b;
}