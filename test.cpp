#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    char key = 'y';

    cout << "Problem about balls. What? Yeah, balls.\n";

    while (key == 'Y' || key == 'y') {

        cout << "\nAgain? (Y or N): ";
        cin >> key;
    }

    return 0;
}