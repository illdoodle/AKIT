#include <iostream>
using namespace std;
//Выведите на экран таблицу умножения чисел от 1 до 9 на числа от 1 до 9, используя внешний for и внутренний while .
    
int main() {
    int j;
    for (int i = 1; i < 10; i++) {
        j = 1;
        while (j < 10) {
            cout << j << " * " << i << " = " << i * j << '\t';
            j++;
        }
        cout << endl;
    }

    return 0;
}
