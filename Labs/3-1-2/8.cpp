#include <iostream>
#include <cmath>
using namespace std;
// Вычислите значение выражения при x = -2.34 (Ответ: -1.7691).

double calculate (double n) {
    return ((fabs(n - 5) - sin(n)) / 3) + (sqrt(pow(n, 2) + 2014)) * cos(2 * n) - 3;
}
    
int main() {
    double x = -2.34;
    cout << calculate(x);
    return 0;
}
