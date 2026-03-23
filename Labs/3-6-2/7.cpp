#include <iostream>
using namespace std;
//Найдите все четырехзначные числа, 
//сумма цифр каждого из которых равна 8.
    
int main() {
    for (int i = 1000; i < 10000; i++) {
        if (i % 10 + (i / 10 % 10) + (i / 100 % 10) + (i / 1000 % 10) == 8) {
            cout << i << endl;
        }
    }

    return 0;
}
