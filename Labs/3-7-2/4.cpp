#include <iostream>
using namespace std;
//Дано число k. Определите, существует ли такое число n, что 1*2*3*…*n = k.

int findFactorial (int number);
    
int main() {
    int k, i = 1;
    bool haveFactorial = false;
    cout << "Enter number: ";
    cin >> k;

    while (i < k) {
        if(findFactorial(i) == k) {
            haveFactorial = true;
            break;
        }
        i++;
    }

    if (haveFactorial) {
        cout << i << endl;
    } else {
        cout << "Not found" << endl;
    }

    return 0;
}

int findFactorial (int number) {
    int sum = 1;
    for (int i = 1; i <= number; i++) {
        sum*=i;
    }
    return sum;
}
