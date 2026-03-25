#include <iostream>
using namespace std;
//На швейной фабрике за день шьют n спортивных форм, 29% из для баскетбола. 
//Сколько флагов зелёного цвета пошьёт фабрика за 5 дней?
    
int main() {
    double n = 100;
    double flagsCount = (n - (0.29 * n));
    cout << flagsCount << endl;
    return 0;
}
