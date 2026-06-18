#include <iostream>
using namespace std;
//Найдите наименьший элемент массива, кратный пяти. Если такого нет, то выведите предпоследний элемент.
    
int main() {
    const int size = 10;
    int arr[size] = {-25, 30, 643, 6100, 99, 20, 10, -10000, 3, 76};
    bool atLeastOneFound = false;
    int res = arr[0];

    for (int i = 0; i < size; i++) {
        if (!(arr[i] % 5) && arr[i] < res) {
            atLeastOneFound = true;
            res = arr[i];
        }
    }
    if (!atLeastOneFound) {
        res = arr[size - 2];
    }

    cout << res << endl;

    return 0;
}
