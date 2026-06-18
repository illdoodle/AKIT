#include <iostream>
using namespace std;
//Создайте массив из 25 случайных целых чисел из отрезка [-4;10]. Замените каждый элемент с индексом кратным пяти на десятку.
    
int main() {
    srand(time(0));
    const int size = 25;
    int arr[size] = {};

    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 15 - 4;
        if(!(i % 5)) {
            arr[i] = 10;
        }
        cout << arr [i] << " | ";
    }

    return 0;
}
