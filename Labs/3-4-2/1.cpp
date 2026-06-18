#include <iostream>
using namespace std;
//Возраст человека вводится в переменную age, исходя из возраста определить к какой возрастной группе относится человек: 
//ребёнок (0-11), подросток (13-17), юноша (18-25), взрослый человек (26-55), пожилой человек (56+).
    
int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;
    if (cin.fail() || age < 0 || age > 150) {
        cout << "Incorrect number" << endl;
        return 0;
    }
    switch (age) {
        case 0 ... 12:
            cout << "Child" << endl;
            break;
        case 13 ... 17:
            cout << "Teen" << endl;
            break;
        case 18 ... 25:
            cout << "Young" << endl;
            break;    
        case 26 ... 55:
            cout << "Adult" << endl;
            break;
        default:
            if (age > 55) {
                cout << "Old man";
            }
            break;
    }
    return 0;
}
