#include <iostream>
using namespace std;
//1-2. Поменять местами наибольший и наименьший элементы массива.

void coutArray (int arr[], int size);

int main() {
    int arr[] = {1, 1, 5, 3, 3, 2, 16, 8, 8, 10};
    const int size = sizeof(arr) / sizeof(arr[0]);
    int maxNumber = arr[0], minNumber = arr[0];
    int maxIndex = 0, minIndex = 0, temp;

    coutArray(arr, size);

    for (int i = 0; i < size; i++) {
        if (maxNumber < arr[i]) {
            maxNumber = arr[i];
            maxIndex = i;
        }
        if (minNumber > arr[i]) {
            minNumber = arr[i];
            minIndex = i;
        }
    }

    temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;

    coutArray(arr, size);

    return 0;
}

void coutArray (int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
