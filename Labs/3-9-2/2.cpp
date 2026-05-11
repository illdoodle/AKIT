#include <iostream>
using namespace std;
//Объявить три массива. Первые два заполнить случайными значениями от 9 до 15. 
//В элементы третьего массива записать разницу соответствующих элементов первых двух массивов. 
//(в нулевую ячейку третьего – разницу нулевых ячеек первого и второго массивов и так далее). 
//Затем найти среднее арифметическое элементов третьего массива, максимальное значение и минимальное значение, которые он хранит.

int main() {
    srand(time(NULL));
    const int size = 10;
    double thirdSum = 0;
    int max = 0, min = 0;
    int first[size] = {};
    int second[size] = {};
    int third[size] = {};
    for (int i = 0; i < size; i++) {
        first[i] = rand() % (15 - 9 + 1) + 9;
        second[i] = rand() % (15 - 9 + 1) + 9;
        third[i] = second[i] - first[i];
        thirdSum += third[i];
        if (third[i] > max) {
            max = third[i];
        } else if (third[i] < min) {
            min = third[i];
        }
    }
    for (int i = 0; i < size; i++) {
        cout << first[i] << ", ";
    }
    cout << endl;
    for (int i = 0; i < size; i++) {
        cout << second[i] << ", ";
    }
    cout << endl;
    for (int i = 0; i < size; i++) {
        cout << third[i] << ", ";
    }
    cout << endl;
    
    cout << "Average: " << thirdSum / size << endl;
    cout << "Maximum: " << max << endl;
    cout << "Minimum: " << min << endl;

    return 0;
}
