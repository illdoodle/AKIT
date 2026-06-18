#include <iostream>
using namespace std;
//Найдите сумму элементов массива между двумя первыми семёрками. Если двух семёрок нет в массиве, то выведите ноль.
    
int main() {
    const int size = 10;
    int arr[size] = {1, 6, 7, 2, 3, 1, 7, 4, 7, 1};
    int sum = 0;


    //Первый способ.
    // for (int i = 0; i < size; i++) {
    //     if (arr[i] == 7) {
    //         for (int j = i + 1; j < size && arr[j] != 7; j++) {
    //             sum+=arr[j];
    //             if(j == size - 1) {
    //                 sum = 0;
    //             }
    //         }
    //         break;
    //     }
    // }

    // Второй способ.
    bool canSum;
    for (int i = 0; i < size; i++) {
        if (canSum) {
            if (arr[i] == 7) {
                canSum = false;
                break;
            }
            sum+=arr[i];
            if (i == size - 1) {
                sum = 0;
            }
        }
        if (arr[i] == 7) {
            canSum = true;
        }
    }

    cout << sum << endl;

    return 0;
}
