#include <iostream>
#include "algorithm"
using namespace std;
//Определить какое из трех чисел q, t, y максимальное и вывести его.
    
int main() {
    const int q = 3, t = 5, y = 1;
    const int maxNumber = max(q, max(t, y));
    cout << maxNumber << endl;
    return 0;
}
