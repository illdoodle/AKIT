#include <iostream>
using namespace std;
//Вывести все числа от 1 до 1000, кратные 9.
    
int main() {
    for (int i = 0; i < 1000; i+=9) {
        if(i == 0) {
            continue;
        }
        cout << i << " ";
    }
    
    return 0;
}
