#include <iostream>
using namespace std;
//Пользователь вводит целое число. Если оно является четным и при этом не находится между 10 и 20, то вывести на экран его квадрат. В противном случае напечатать исходное число.

void printSquare(int n);

int main() {
    int n;
    cin >> n;
    if(!(n % 2) && n <= 10 || n >= 20) {
        printSquare(n);
    } else {
        cout << n << endl;
    }

    return 0;
}

void printSquare(int n) {
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cout << n << "  ";
        }
        cout << endl;
    }
}
