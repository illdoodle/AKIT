#include <iostream>
#include "math.h"
using namespace std;
//5. Создать переменные a и b, при помощи потока ввода ввести в них значения, далее вывести их корень из a по основанию b.
    
int main() {
    int a;
    double b;
    cin >> a >> b;
    cout << pow(a, 1/b);
    return 0;
}
