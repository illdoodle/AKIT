#include <iostream>
#include "math.h"
using namespace std;
//Дан прямоугольник размером 777x120. Сколько квадратов со стороной 12 можно вырезать из него?
    
int main() {
    int length = 777, width = 120, squareSide = 12;
    cout << (length * width) / pow(squareSide, 2);
    return 0;
}
