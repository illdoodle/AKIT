#include <iostream>
using namespace std;
//Вывести на экран ряд чисел Фибоначчи, 
//состоящий из n элементов. Числа Фибоначчи – это элементы
//числовой последовательности 0, 1, 1, 2, 3, 5, 8, 13, 21, 34,
//55, 89, 144, …, в которой каждое последующее число равно 
//сумме двух предыдущих.
    
int main() {
    const int fibonacciCoutCount = 20;
    int fibonacciNumbers[] = {0, 1}, tmp;

    cout << fibonacciNumbers[0] << endl << fibonacciNumbers[1] << endl;
    for (int i = 0; i < fibonacciCoutCount; i++) {
        cout << fibonacciNumbers[0] + fibonacciNumbers[1] << endl;
        
        tmp = fibonacciNumbers[0];
        fibonacciNumbers[0] = fibonacciNumbers[1];
        fibonacciNumbers[1] = tmp + fibonacciNumbers[1];
    }

    return 0;
}
