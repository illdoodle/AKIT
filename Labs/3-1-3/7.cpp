#include <iostream>
#include "math.h"
using namespace std;
//7. Создайте переменные a и b и вычислите значение выражения 2b^a + a - a^b-a.

int calculate (int a, int b) {
    return pow(2 * b, a) + a - pow(a, b - a);
}

int main() {
    int a = 1, b = 2;
    cout << calculate(a, b) << endl;
    a = 2, b = 3;
    cout << calculate(a, b) << endl;
    a = 1, b = 1;
    cout << calculate(a, b) << endl;
    return 0;
}
