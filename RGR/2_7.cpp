#include <iostream>
using namespace std;
//2-7. Дан двухмерный массив n×m элементов. Определить, сколько раз встречается число 7 среди элементов массива.

int main() {
    int m = 5, n = 5, counter = 0, x = 7;
    int arr[m][n] = {
        {1, 5, 2, 7, 4},
        {2, 1, 1, 8, 3},
        {90, 344, 77, 1},
        {42, 7, 123, 7, 1},
        {7, 10, 1007, -1},
    };

    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            if(arr[j][i] == x) {
                counter++;
            }
        }
    }

    cout << counter << endl;
    
    return 0;
}
