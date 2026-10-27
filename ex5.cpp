#include <iostream>
#include <queue>

using namespace std;

struct Visitor {
    int ticketNumber;
};

int main() {
    queue<Visitor> libraryQueue;

    for (int i = 1; i <= 7; ++i) {
        libraryQueue.push({100 + i});
    }

    cout << "Початкова кількість відвідувачів у черзі: " << libraryQueue.size() << endl;

    while (libraryQueue.size() > 3) {
        Visitor v = libraryQueue.front();
        libraryQueue.pop();
        cout << "Обслуговується відвідувач з читацьким квитком №" << v.ticketNumber << endl;
    }

    cout << "Обслуговування зупинено. У черзі залишилося відвідувачів: " << libraryQueue.size() << endl;

    return 0;
}