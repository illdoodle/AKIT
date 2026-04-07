#include <iostream>
using namespace std;
//Напечатать числа в виде следующей таблицы: ...
    
int main() {
    for (int i = 0; i < 4; i++) {   
        for (int j = 0; j < 5; j++) {
            cout << "5 ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 1; j < 11; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0, count = 41; i < 4; i++) {
        for (int j = 0; j < 10; j++, count++) {
            cout << count << " ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}
