#include <iostream>
using namespace std;
//Вывод номеров задач по варианту с учетом нумерации с нуля.

int main() {
    const int tasksAmountPerChapter[] = {34, 54, 68};
    const int studentsAmount = 29, needableTasksAmountPerChapter = 3, chaptersAmount = sizeof(tasksAmountPerChapter) / sizeof(tasksAmountPerChapter[0]);
    int myVariant = 8;

    // //Проверка ввода.
    // cout << "Enter your variant (" << studentsAmount << " students): ";
    // if (cin >> myVariant && myVariant <= studentsAmount) {
    //     cout << endl << "Your task indexes: " << endl;
    // } else {
    //     cout << endl << "Error: Enter correct number!" << endl;
    //     cin.clear();
    //     return 0;
    // }
    
    for (int j = 0; j < chaptersAmount; j++) {
        cout << "| ";
        for (int i = 0, taskIndex = myVariant; i < needableTasksAmountPerChapter; i++, taskIndex+=studentsAmount) {
            if (taskIndex > tasksAmountPerChapter[j]) {
                taskIndex = taskIndex - tasksAmountPerChapter[j];
            } 
            cout << taskIndex - 1 << " ";
        }
    }
    cout << "|";
  
    return 0;
}
