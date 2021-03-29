#include <iostream>

using namespace std;

int classicAlgorithm(int a, int b) {
    while (a != b) {
        if (a > b) a -= b;
        else b -= a;
    }
    
    return a;
}

int modifiedAlgorithm(int a, int b) {
    if (b == 0) return a;
    else return modifiedAlgorithm(b, a % b);
}

int main() {
    char key = 'y';
    int a, b, answer;
    bool checker;

    cout << "Check this out. Euclid's algorithm.\n";

    while (key == 'Y' || key == 'y') {
        cout << "\nDo you want to proceed classic or modified algorithm? (0 classic, 1 modified).\n";
        cin >> checker;

        cout << "\nA: ";
        cin >> a;
        cout << "B: ";
        cin >> b;

        if (checker) {
            answer = modifiedAlgorithm(a, b);
            cout << "Answer (modified): " << answer;
        }
        else {
            answer = classicAlgorithm(a, b);
            cout << "Answer (classic): " << answer;
        }
        

        cout << "\n\nAgain? (Y or N): ";
        cin >> key;
    }
    
    return 0;
}