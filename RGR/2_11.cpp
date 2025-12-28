#include <iostream>
using namespace std;
//2-11. Создать матрицу, состоящую из нулей, за исключением элементов, которые находятся в крайних столбцах и строках - они равны единице.

int main() {
    const int m = 5, n = 5;
    int matrix[m][n] = {};


    for (int j = 0; j < m; j++) {
        matrix[j][0] = 1;
        matrix[j][m - 1] = 1;
        for (int i = 1; i < n - 1; i++) {
            if(j == 0 || j == m - 1) {
                matrix[j][i] = 1;
            }
        }
    }

    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n; i++) {
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}
