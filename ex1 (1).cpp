#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> numbers;
    int values[20] = { 10, 25, 4, 18, 30, 12, 7, 19, 22, 15, 8, 33, 14, 21, 9, 27, 16, 5, 24, 11 };
    
    double sum = 0;
    for (int i = 0; i < 20; ++i) {
        numbers.push(values[i]);
        sum += values[i];
    }
    
    double average = sum / 20;
    
    int count = 0;
    queue<int> tempQueue = numbers;
    while (!tempQueue.empty()) {
        if (tempQueue.front() > average) {
            count++;
        }
        tempQueue.pop();
    }
    
    cout << "Середнє арифметичне: " << average << endl;
    cout << "Кількість елементів, що перевищують середнє арифметичне: " << count << endl;

    return 0;
}