#include <iostream>
using namespace std;
//Упорядочить значения массива с размерностью 10 по убыванию и возрастанию методами пузырька, быстрой сортировки.

int* sortArray (int array[], const int size, const bool isAscendingOrder, const char sortMethod[]);
void bubbleSort (int array[], const int size, const bool isAscendingOrder);
void quickSort (int array[], const int size, const bool isAscendingOrder);
void coutArray (int array[], const int size);
    
int main() {   
    const int size = 10;
    int arr[size] = {4, 2, 3, 7, 1, 8, 9, 6, 10, 5};
    
    cout << "Origin array: ";
    coutArray(arr, size);

    //Утечка памяти?
    coutArray(sortArray(arr, size, true, "bubble"), size);
    coutArray(sortArray(arr, size, false, "bubble"), size);
    coutArray(sortArray(arr, size, false, "blabla"), size);   

    return 0;
}

int* sortArray (int array[], const int size, const bool isAscendingOrder, const char sortMethod[]) {
    int* newArr = new int[size];
    for (int i = 0; i < size; i++) {
        newArr[i] = array[i];
    }

    if (sortMethod == "bubble") {
        bubbleSort(newArr, size, isAscendingOrder);
    } else if (sortMethod == "quick") {
        quickSort(newArr, size, isAscendingOrder);
    } else {
        cout << "Unknown sort method.";
        return 0;
    }

    cout << "Sorted with " << sortMethod << " in " << (isAscendingOrder ? "ascending order. ": "descending order. ") << endl;
    
    return newArr;
}

void coutArray (int array[], const int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void bubbleSort (int array[], const int size, const bool isAscendingOrder) {
    int tmp;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            if (isAscendingOrder ? array[i] < array[j] : array[i] > array[j]) {
                tmp = array[i];
                array[i] = array[j];
                array[j] = tmp;
            } 
        }
    }
}

void quickSort (int array[], const int size, const bool isAscendingOrder) {
    cout << ":(" << endl; 
}
