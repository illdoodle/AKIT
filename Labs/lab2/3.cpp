#include <iostream>
using namespace std;
//Проверить, принадлежит ли число интервалу (–5, 3).
    
int main() {
    int n;
    cin >> n;
    if(n > -5 && n < 3) {
        cout << "Принадлежит интервалу" << endl;
    } else {
        cout << "Не принадлежит интервалу" << endl;
    }
    return 0;
}
