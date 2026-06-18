#include <iostream>
using namespace std;
//Вывести на экран прямоугольник 11x12, образованный из двух видов символов. Контур прямоугольника должен состоять из символа "H", а в "заливка" – из символа "*".
    
int main() {
    for (int i = 0; i <= 11; i++) {
        for (int j = 0; j <= 12; j++) {
            if (!i || i == 11) {
                cout << "* ";
            } else if (!j || j == 12) {
                cout << "* ";
            } else {
                cout << "H ";
            }
        }
        cout << endl;
    }

    return 0;
}
