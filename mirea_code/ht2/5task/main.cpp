#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");

    float x = -4.0, y, step = 0.5;

    int error = 0;
    char key = 'y';

    cout << "Привет! Давай протабулируем функцию y.\n";

    while (key == 'Y' || key == 'y') {
        for (int i = 0; i < 16; i++) {
            x += step;
            cout << x << endl;
        }

        cout << "\nХочешь еще разок? (Y или N): ";
        cin >> key;
    }

    return 0;
}