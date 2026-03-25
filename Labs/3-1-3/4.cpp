#include <iostream>
using namespace std;
//4. Создайте 5 переменных типа char, введи в каждую переменную по букве и выведите эти символы (слово) на экран. (Символы вводить латиницей). 
//Например, если введены буквы "q","w","e","r", "t","y", то в консоль должно вывести "qwerty".
    
int main() {
    char firstLetter;
    char secondLetter;
    char thirdLetter;
    char fourthLetter;
    char fifthLetter;
    cin >> firstLetter >> secondLetter >> thirdLetter >> fourthLetter >> fifthLetter;
    cout << firstLetter << secondLetter << thirdLetter << fourthLetter << fifthLetter;
    return 0;
}
