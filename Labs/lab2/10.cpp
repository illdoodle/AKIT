#include <iostream>
#include <math.h>
using namespace std;
//Пользователь вводит коэффициенты а, b и с квадратного уравнения ах2 + bх + с = 0. 
//Вывести на экран все корни этого уравнения или сообщение о том, что их нет. Отдельно рассмотреть случай, когда корни совпадают.
    
int main() {
    int a, b, c;
    cout << "Введите коэффициенты квадратного уравнения: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    if(cin.fail()) {
        cout << "Ошибка: Введите корректное число!" << endl;
        return 0;
    }
    const int d = pow(b, 2) - 4 * a * c;
    if(d < 0) {
        cout << "Корней нет!" << endl;
    } else if (d == 0) {
        const int root = -b / 2 * a;
        cout << "Один корень: " << root << endl;
    } else if (d > 0) {
        const int squartedD = sqrt(d);
        const int firstRoot = (-b + squartedD) / 2 * a;
        const int secondRoot = (-b - squartedD) / 2 * a;
        cout << "Первый корень: " << firstRoot << endl;
        cout << "Второй корень: " << secondRoot << endl;
    }

    return 0;
}
