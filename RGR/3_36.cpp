#include <iostream>
#include <cctype>
using namespace std; 
//3-36. Дана строка. Определите, является ли она действительным числом.

bool isRealNumber(char s[], int size);

int main() {
    char s[] = "-5.23";
    const int size = sizeof(s) / sizeof(s[0]);
    cout << isRealNumber(s, size) << endl;

    return 0;
}

bool isRealNumber (char s[], int size) {
    if(s[0] == '\0') return false;

    int i = 0;
    bool hasDigits, hasDecimal;

    if (s[i] == '+' || s[i] == '-') {
        i++;
        // if (s[i] == '\0') return false;
    }
    
    while (s[i] != '\0') {
        if (isdigit(s[i])) {
            hasDigits = true;
        } else if (s[i] == '.' && isdigit(s[i + 1])) {
            if (hasDecimal) return false;
            hasDecimal = true;
        } else {
            return false;
        }
        i++;
    }
    
    return hasDigits;
}
