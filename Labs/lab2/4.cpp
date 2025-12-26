#include <iostream>
using namespace std;

//Если переменная a равна нулю, то выведите "Верно", иначе выведите "Неверно". Проверьте работу скрипта при a, равном 1, 0, -3.

void ifEqualsZero(int a);
    
int main() {
    ifEqualsZero(0);
    ifEqualsZero(1);
    ifEqualsZero(-3);
    return 0;
}

void ifEqualsZero(int a) {
     if (!a) {
        cout << "Верно" << endl;
    } else { 
        cout << "Неверно" << endl;
    }
}
