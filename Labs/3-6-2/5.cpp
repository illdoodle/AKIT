#include <iostream>
using namespace std;
//Найти произведение 1*2*3*…*n.
    
int main() {
    const int n = 5;
    int sum = 1;
    for (int i = 1; i <= n; i++) {
        sum*=i;
    }
    cout << sum; 

    return 0;
}
