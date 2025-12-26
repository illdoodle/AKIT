#include <iostream>
using namespace std;
//Поменяйте местами значения двух переменных.
    
int main() {
    int a = 2, b = 3;
    int tmp = b;
    cout << a << b << endl;
    b = a;
    a = tmp;
    cout << a << b << endl;
    return 0;
}
