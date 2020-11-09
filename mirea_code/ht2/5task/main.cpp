#include <iostream>

using namespace std;

int main() {
    float x = -4.5, y, step = 0.5;

    int error = 0;
    char key = 'y';

    cout << "Привет! Давай протабулируем функцию y.\n";

    while (key == 'Y' || key == 'y') {
        for (int i = 0; i < 17; i++) {
            x += step;
            if (x - 1 != 0) y = (x*x - 2*x + 2) / (x - 1);
            else cout << "X = " << x << "\nY = (нельзя делить на ноль)\n\n";
            cout << "X = " << x << "\nY = " << y << "\n\n";
        }

        cout << "\nХочешь еще разок? (Y или N): ";
        cin >> key;
    }

    return 0;
}