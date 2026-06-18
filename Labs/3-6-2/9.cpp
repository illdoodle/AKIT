#include <iostream>
using namespace std;
//Дано предложение. 
//Определить, сколько в нем одинаковых соседних букв.
    
int main() {    
    const char str[] = "dddeus miseereatur nostriii";    
    const int length = sizeof(str) / sizeof(str[0]);
    int count = 0;
    for (int i = 0; i < length; i++) {
        cout << str[i];
        if (str[i] == str[i + 1] ^ str[i] == str[i - 1]) {
            count++;
            cout << "*";
        }
        if (str[i] == str[i + 1] && str[i] == str[i - 1]) {
            count++;
            cout << "*";
        }
    }
    cout << endl << count << endl;
    return 0;
}
