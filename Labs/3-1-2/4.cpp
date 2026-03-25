#include <iostream>
using namespace std;
//Пользователь вводит сумму депозита и количество месяцев хранения денег в банке. 
//Необходимо провести расчет и показать на экран прибыль с депозита в месяц, за весь срок депозита, 
//и общую сумму к выплате в конце срока. Процентная ставка – 5% годовых. 
//Формула расчета процентов в месяц – 
//СуммаДепозита * (ПроцентнаяСтавка / 100) / ДнейВГоду * ДнейВМесяце.

int main() {
    int moneyDep, monthsOfHold;
    double procentPerYear = 5;
    cout << "Введите сумму депозита: ";
    cin >> moneyDep;
    cout << "Введите кол-во месяцев хранения: ";
    cin >> monthsOfHold;
    double moneyIncomePerMonth = moneyDep * (procentPerYear / 100.0) / 365 * 30;
    double moneyIncomePerPeriod = moneyIncomePerMonth * monthsOfHold;
    cout << "Прибыль в месяц: " << moneyIncomePerMonth << endl;
    cout << "Прибыль в год: " << moneyIncomePerPeriod << endl;
    cout << "Сумма в конце срока: " << moneyDep + moneyIncomePerPeriod << endl;
    return 0;
}
