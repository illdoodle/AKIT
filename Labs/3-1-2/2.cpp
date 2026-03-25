#include <iostream>
using namespace std;
//Увеличить число n на 4, а потом уменьшить на 5, используя только инкремент и декремент.

int main() {
    int oldCount, count = 0;
    for(; count < 4; count++);
    oldCount = count;
    for(; count > oldCount - 5; count--);
    cout << count << endl;
    return 0;
}
