#include <iostream>
#include <cstdlib>
using namespace std;
//1-31. Реализовать алгоритм перестановки элементов массива a так, 
//чтобы ни один из элементов не остался на своем месте и имел бы одинаковые вероятности занять любое из остальных мест.

void coutArray (int arr[], int size);

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    const int size = sizeof(arr) / sizeof(arr[0]);
    int cachedIndexes[size] = {};
    int randomIndex, temp;

    srand(time(0));
    coutArray(arr, size);
    
    for (int i = 0; i < size - 1; i++) {
        randomIndex = i + rand() % (size - i);
        while (i == randomIndex) {
            randomIndex = i + rand() % (size - i);
        }
        
        temp = arr[i];
        arr[i] = arr[randomIndex];
        arr[randomIndex] = temp;
    }

    coutArray(arr, size);

    return 0;
}

void coutArray (int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}