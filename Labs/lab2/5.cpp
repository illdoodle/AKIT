#include <iostream>
using namespace std;
//Если переменная a больше 2 и меньше 11, или переменная b больше или равна 6 и меньше 14, то выведите "Верно", в противном случае выведите "Неверно".
    
int main() {
    const int a = 5, b = 2;
    if((a > 2 && a < 11) || (b >= 6 && b < 14)) { 
        cout << "Верно" << endl;
    } else {
        cout << "Неверно" << endl;
    }
    return 0;
}
