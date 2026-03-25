#include <iostream>
using namespace std;
//3. Создайте 3 переменные с разными типами данных (int, char и double) и при помощи потока ввода (cin) введите в них значения. 
//После ввода, отобразите их на экране.
    
int main() {
    int variableInt;
    double variableDouble;
    char variableChar;
    cin >> variableInt >> variableDouble >> variableChar;
    cout << variableInt << endl;
    cout << variableDouble << endl;
    cout << variableChar << endl;
    return 0;
}
