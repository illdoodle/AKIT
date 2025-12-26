#include <iostream>
using namespace std;
//Дано число 24832, проверить делится ли оно нацело на 3. Если делится, то вывести "Да", иначе вывести "Нет".
    
int main() {
    const int n = 24832;
    if (n % 3) {
        cout << "Нет" << endl;
    } else {
        cout << "Да" << endl;
    }
    return 0;
}
