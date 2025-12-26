#include <iostream>
#include <math.h>
using namespace std;
//В доме 12 этажей, на каждом этаже одного подъезда по 3 квартир. 
//В каком подъезде, и на каком этаже находится n-я квартира.
    
int main() {
    const int floorsAmount = 12, roomsOnFloor = 3; 
    const int roomsOnEntrance = floorsAmount * roomsOnFloor;
    int n = 1, floor, entrance;
    for(int i = 0; i < 8; i++) {
        for (int j = 0; j < 2; j++, n++) {
            cout << n << "  " << floor << ":" << entrance; 
            cout << '\t' << '\t';
        }
        cout << endl;
    } 
    return 0;
}
