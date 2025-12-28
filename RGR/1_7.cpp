#include <iostream>
using namespace std;
//1-7. Найти в массиве все серии подряд идущих одинаковых элементов и удалить из них все элементы кроме одного.

void coutArray (int arr[], int size);

int main() {
    int arr[] = {1, 2, 5, 3, 3, 2, 8, 8, 8, 10};
    const int size = sizeof(arr) / sizeof(arr[0]);
    int count = 1;
    
    coutArray(arr, size);
    
    for (int i = 1; i < size; i++) {
        if (arr[i] != arr[i - 1]) {
            arr[count] = arr[i];
            count++;
        }
    }

    coutArray(arr, count);
    
    return 0;
}

void coutArray (int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
