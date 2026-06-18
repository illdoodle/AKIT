#include <iostream>
using namespace std;
//Вывести на экран числа от 1000 до 9999 такие, 
//что среди цифр есть цифра 7.
    
int main() {
    for (int i = 1000, n = i; i < 9999; i++, n = i) {
        while (n > 0) {
            if (n % 10 == 7) {
                cout << i << endl;
            }
            n /= 10;
        }
    }
    
    return 0;
}
