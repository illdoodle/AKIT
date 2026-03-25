#include <iostream>
using namespace std;
//Организовать беспрерывный ввод чисел с клавиатуры, пока их сумма не станет больше 130. 
//После показать на экран количество чисел, которые были введены, их общую сумму и среднее арифметическое.
    
int main() {
    int input, count;
    double sum = 0;

    while (sum < 130) {
        cout << "Enter number: ";
        cin >> input;
        sum+=input;
        count++;
    }

    cout << "Total numbers count: " << count << endl;
    cout << "Total amount: " << sum << endl;
    cout << "Arithmetic mean: " << sum / count << endl;

    return 0;
}
