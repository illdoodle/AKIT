#include <iostream>
#include <string>
using namespace std;
//В одной строке задано 3 целых числа - длины сторон треугольника. Длины сторон не превышают 100. 
//Определить вид треугольника (равносторонний, равнобедренный, разносторонний) по заданным длинам его сторон. 
//Вывести 1, если треугольник равносторонний, 2 если равнобедренный и 3 если разносторонний.
    
int main() {
    int triangle[3] = {13, 13, 13};
    int duplicateCount = 0;

    if (triangle[0] == triangle[1]) duplicateCount++;
    if (triangle[0] == triangle[2]) duplicateCount++;
    if (triangle[1] == triangle[2]) duplicateCount++;

    if(duplicateCount == 0) { 
        cout << "Разносторонний треугольник" << endl;
    }else if (duplicateCount == 1) {
        cout << "Равнобедренный треугольник" << endl;
    } else if (duplicateCount > 1) { 
        cout << "Равносторонний треугольник" << endl;
    }
    return 0;
}
