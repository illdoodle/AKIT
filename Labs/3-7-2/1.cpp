#include <iostream>
using namespace std;
//Напечатать минимальное число, большее 270, которое нацело делится на 19.
    
int main() {
    int i = 270;
    while (i % 19) {
        i++;
    }
    cout << i << endl;
    return 0;
}
