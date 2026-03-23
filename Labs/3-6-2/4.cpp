#include <iostream>
using namespace std;
//Напечатать заданное слово, начиная с 8 буквы с конца.
    
int main() {
    const char str[] = "Hello World";
    const int length = sizeof(str) / sizeof(str[0]), n = 8;
    for (int i = length - (n + 1); i < length; i++) {
        cout << str[i];
    }
    
    return 0;
}
