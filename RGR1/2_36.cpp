#include <iostream>
using namespace std;
//2-36. Дана целочисленная прямоугольная матрица размера n x m. 
// Сформировать одномерный массив, состоящий из элементов, лежащих на отрезке [a,b]. Найти среднее арифметическое полученного одномерного массива.

int main() {
    const int m = 5, n = 5, a = 3, b = 90;
    int size = 0;
    double sum = 0;
    int matrix[m][n] = {
        {1, 5, 2, 7, 4},
        {2, 1, 1, 8, 3},
        {90, 344, 77, 1},
        {42, 7, 123, 7, 1},
        {7, 10, 1007, -1},
    };
    int arr[m * n] = {};

    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            if (matrix[j][i] >= a && matrix[j][i] <= b) {
                arr[size] = matrix[j][i];
                size++;
            }
        }
    }

    for (int i = 0; i < size; i++) {
        sum+=arr[i];
        cout << arr[i] << " ";
    }
    cout << endl << sum << " / " << size << " = " << sum / size << endl;

    return 0;
}
