#include <iostream>
using namespace std;
//Создайте массив из 5 случайных целых чисел из отрезка [0;15], выведите его на экран в строку. 
//Определить и вывести на экран сообщение о том, является ли массив строго убывающей последовательностью.
    
int main() {
    srand(time(0));
    const int size = 5;
    int arr[size] = {};
    bool isDecreasing = true;

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 16;
        cout << arr [i] << " | ";
    }

    for (int i = 1; i < size; i++) {
        if (!(arr[i] < arr[i - 1])) {
            isDecreasing = false;
        }
    }

    cout << (isDecreasing ? "true" : "false") << endl;
    

    return 0;
}
