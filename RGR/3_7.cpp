#include <iostream>
using namespace std;
//3-7. Дана строка. Определите, какой символ в ней встречается раньше: 'x' или 'w'. Если какого-то из символов нет, вывести сообщение об этом.

int main() {
    char s[] = "ysaddgsd";
    int size  = sizeof(s) / sizeof(s[0]);
    int xIndex = -1, wIndex = -1;
    
    for (int i = 0; i < size; i++) {
        (s[i] == 'x') ? xIndex = i : -1;
        (s[i] == 'w') ? wIndex = i : -1;
    }

    cout << ((xIndex == -1) ? "x not found \n" : "");
    cout << ((wIndex == -1) ? "w not found \n" : "");
    if (xIndex > wIndex) {
        cout << "x first = " << xIndex << " > " << wIndex << endl;;
    } else if (wIndex > xIndex) {
        cout << "w first = " << wIndex << " > " << xIndex << endl;;
    } else {
        cout << "no x or w" << endl;
    }

    return 0;
}
