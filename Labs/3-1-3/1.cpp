#include <iostream>
using namespace std;
//1. Вывести на экран квадрат, заполненный буквами H. Количество строк и столбцов в квадрате равно 5.

int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << 'H';
        }
        cout << '\n';
    }
    return 0;
}
