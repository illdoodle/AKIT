#include <iostream>
using namespace std;
//Создать массив типа int на 27 элементов и заполнить его случайными числами от 20 до 33. 
//После заполнения перезаписать все числа, которые больше 25: от хранимого значение отнять 25. Для генерации чисел использовать rand().
    
int main() {
    srand(time(NULL));
    const int size = 27;
    int arr[size] = {};
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % (33 - 20 + 1) + 20;
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
    for (int i = 0; i < size; i++) {
        if(arr[i] > 25) {
            arr[i] = arr[i] - 25;
        }
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << ", ";
    }

    return 0;
}
