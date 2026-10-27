#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> source;
    queue<int> result;

    for (int i = 1; i <= 200; ++i) {
        source.push(i);
    }

    while (!source.empty()) {
        int x = source.front();
        source.pop();

        if (x >= 10 && x <= 99) {
            int sum = (x / 10) + (x % 10);
            if (sum == 9) {
                result.push(x);
            }
        }
    }

    cout << "Двоцифрові числа, сума цифр яких дорівнює 9: ";

    while (!result.empty()) {
        cout << result.front() << " ";
        result.pop();
    }

    cout << endl;

    return 0;
}