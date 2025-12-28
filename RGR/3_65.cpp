#include <iostream>
#include <cstdlib>
using namespace std;
//3-65. Вывести слова строки, начинающиеся и заканчивающиеся одной и той же буквой.

int main() {
    srand(time(0));
    char str[] = "tenet apple tree noon wise task people wow";
    const int size = sizeof(str) / sizeof(str[0]);
    int wordStart = 0;

    for (int i = wordStart; i < size; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            if(str[wordStart] == str[i - 1]) {
                for (int j = wordStart; j < i; j++) {
                    cout << str[j] << " ";
                }
                cout << endl;
            }
            wordStart = i + 1;
        }
    }

    return 0;
}
