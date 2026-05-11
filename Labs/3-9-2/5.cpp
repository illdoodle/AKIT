#include <iostream>
using namespace std;
//Девять раз осуществите циклический сдвиг элементов влево, затем 1 раз вправо.

void shiftLeft(int arr[], const int size, int count);
void shiftRight(int arr[], const int size, int count);
void coutArray(int arr[], const int size);

int main() {
    const int size = 10;
    int arr[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    coutArray(arr, size);
    shiftLeft(arr, size, 9);
    coutArray(arr, size);
    shiftRight(arr, size, 1);
    coutArray(arr, size);

    return 0;
}

void coutArray(int arr[], const int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void shiftLeft(int arr[], const int size, int count) {
    int tmp;
    for (int j = 0; j < count; j++) {
        tmp = arr[0];
        for (int i = 0; i < size; i++) {
            arr[i] = arr[i + 1];
        }
        arr[size - 1] = tmp;
    }
}

void shiftRight(int arr[], const int size, int count) {
    int tmp;
    for (int j = 0; j < count; j++) {
        tmp = arr[size - 1];
        for (int i = size; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = tmp;
    }
}