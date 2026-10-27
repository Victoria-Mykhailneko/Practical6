#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    queue<char> letters;
    string text = "програмування";

    for (int i = 0; i < text.length(); ++i) {
        letters.push(text[i]);
    }

    bool foundDuplicate = false;
    if (!letters.empty()) {
        char prev = letters.front();
        letters.pop();

        while (!letters.empty()) {
            char current = letters.front();
            letters.pop();

            if (prev == current) {
                foundDuplicate = true;
                break;
            }
            prev = current;
        }
    }

    if (foundDuplicate) {
        cout << "У рядку є дві однакові сусідні літери." << endl;
    } else {
        cout << "У рядку немає однакових сусідніх літер." << endl;
    }

    return 0;
}