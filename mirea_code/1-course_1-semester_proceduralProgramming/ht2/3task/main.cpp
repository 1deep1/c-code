#include <iostream>
#include <cstdlib>
#include <cmath>
#include <math.h>

using namespace std;

double calcZ(int x, int y, int b) {
    double xD = 1.0 * x, yD = 1.0 * y, bD = 1.0 * b;
    return log(bD - yD) * sqrt(bD - xD);
}

int main() {
    srand((unsigned int) time(NULL));
    int x, y, b;
    double z;

    int error = 0;
    char key = 'y';

    cout << "Привет! Вычислю для тебя Z для произвольных x, y и b!\n";

    while (key == 'Y' || key == 'y') {
        x = rand() % 101 - 50;
        y = rand() % 101 - 50;
        b = rand() % 101 - 50;

        cout << "X: " << x << "\n"<< "Y: " << y << "\nB: " << b;

        z = calcZ(x, y, b);
        cout << "\nZ = " << z;

        cout << "\nХочешь еще разок? (Y или N): ";
        cin >> key;
    }

    return 0;
}