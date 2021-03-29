#include <iostream>
//#include "test.cpp"

using namespace std;

int testFunc() {
    cout << "\n(0) - alg_name\n";
    return 0;
}

int main() {
    bool sortChecker;
    char key = 'y';

    cout << "Grachev E., Practice 4;\n" << endl << "Hey! Wanna see some sort? Choose an algorithm:";

    while (key == 'Y' || key == 'y') {
        cout << "\n(0) - alg_name" << endl << "(1) - alg_name" << endl;
        cout << "\nYour choice: ";
        cin >> sortChecker;

        switch (sortChecker) {
            case false:
                testFunc();
                break;
            case true:
                cout << "\nTHX!\n";
                break;
        }
        cout << "\nOnce again? (Y or N): ";
        cin >> key;
    }

    return 0;
}