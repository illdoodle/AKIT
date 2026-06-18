#include <iostream>
using namespace std;
//Обнулить в массиве все числа, которые повторяются более семи раз. Первые два элемента оставлять.
    
int main() {
    const int size = 16;
    int arr[size] ={44, 2, 1, 6, 44, 44, 44, 8, 4, 6, 44, 44, 1, 44, 44, 44};
    int clone, clonesToDelete = 7, counter = 0;

    for (int i = 0; i < size; i++) {
        cout << arr[i] << ", ";
    }
    cout << endl << endl;

    for (int i = 2; i < size && i + clonesToDelete != size + 1; i++) {
        if (!arr[i]) {
            continue;
        }
        
        cout << "Analysing: " << arr[i] << endl;
        for (int j = i + 1; j < size && arr[i]; j++) {
            if (!arr[j]) {
                continue;
            }
            cout << "Comparing with... " << arr[j] << endl;
            if (arr[i] == arr[j]) {
                counter++;
                cout << "Found clone! Increasing counter. Now it's: " << counter << endl;
                if (counter >= clonesToDelete) {
                    clone = arr[i];
                    cout << "Enoughs clones to delete! Deleting process is started. It's... " << clone << endl;
                }
            }
        }

        if (clone) {
            for (int i = 2; i < size; i++) {
                if(arr[i] == clone) {
                    arr[i] = 0;
                }
            }
        }

        cout << "Nullifying the counter." << endl << endl;
        counter = 0;
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;

    return 0;
}
