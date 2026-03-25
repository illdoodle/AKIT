#include <iostream>
using namespace std;
//Компьютер загадывает число от 1 до 100. У пользователя есть попытки отгадать. 
//После каждой неудачной попытки компьютер сообщает меньше или больше загаданное число. Чтобы компьютер сам сгенерировал число, воспользуйтесь функцией rand().
    
int main() {
    srand(time(0));
    const int random = rand() % 100 + 1;
    const int attempsGiven = 5;
    int userTry, attemptsCount = 0; 
    // cout << random << endl;

    do {
        if (attemptsCount == attempsGiven - 1) {
            cout << "Last try!" << endl;
        }

        cout << "Try number: ";
        cin >> userTry;
        
        if (userTry == random) {
            cout << "Congratulations!"<< endl;
            break;
        }
        attemptsCount++;
        if (attemptsCount == attempsGiven) {
            cout << ":(" << endl;
            break;
        }

        if (userTry > random) {
            cout << "Less! " << endl;
        } else if (userTry < random) {
            cout << "More! " << endl;
        }
    } while (true);

    return 0;
}
