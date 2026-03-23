#include <iostream>
#include <math.h>
using namespace std;
//В доме 12 этажей, на каждом этаже одного подъезда по 3 квартир. 
//В каком подъезде, и на каком этаже находится n-я квартира.
    
int main() {
    const int floorsAmount = 12, roomsOnFloor = 3; 
    const int roomsOnEntrance = floorsAmount * roomsOnFloor;
    int n, floor, entrance;
    cout << "Enter apartament nubmer: ";
    cin >> n;
    entrance = (n + roomsOnEntrance - 1) / roomsOnEntrance;
    floor = ((n - (entrance - 1) * roomsOnEntrance) + (roomsOnFloor - 1)) / roomsOnFloor;
    cout << floor << "/" << entrance << endl;
    return 0;
}
