#include <iostream>
using namespace std;
//Дано двузначное число. Определить: а) входит ли в него цифра 0; б) входит ли в него цифра а.
    
int main() {
    const int n = 20;
    const int a = 1;
    if(!(n % 10)){
        cout << "Есть 0." << endl;
    }
    if(a == n % 10 || a == n / 10) {
        cout << "Число " << a << " есть в " << n << endl;
    }
    return 0;
}
