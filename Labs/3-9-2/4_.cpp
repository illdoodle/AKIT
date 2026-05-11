#include <iostream>
using namespace std;
//Найдите элемент в массиве, которые по значению ближе всего к среднему арифметическому.
    
int main() {

    const int size = 10;
    const int arr[size] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int closest, sum = 0;
    double average, minDifference;

    for (int i = 0; i < size; i++) {
        sum+=arr[i];
    }
    average = 1.0 * sum / size;

    for (int i = 1; i < size; i++) {
        
    }

    cout << average << "   " << closest << endl;
    
    return 0;
}
