#include <iostream>
using namespace std;
//Найти максимальное из натуральных чисел, не превышающих 5700, которое нацело делится на 47
    
int main() {
    const int max = 5700;
    int i = max;
    
    while (i % 47) {
        i--;
    }

    cout << i << endl;

    return 0;
}
