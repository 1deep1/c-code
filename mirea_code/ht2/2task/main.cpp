#include <iostream>
#include <cstdlib>
#include <cmath>
#include <math.h>
//#include "calc.cpp"

using namespace std;

long double calcW(int x, int a) {
    int absX, lnX;
    absX = abs(x);
    lnX = log10(absX);

    cout << "\nlnX: " << lnX;

    if (absX < 1) {
        return a * lnX;
    }
    else if (absX >= 1) {
        return sqrt(a - (x * x));
    }
    else {
        return 0;
    }
}

int main() {
    srand((unsigned int) time(NULL));
    int x, a;
    long double w;

    int error = 0;
    char key = 'y';

    cout << "Привет! Вычислю для тебя W для произвольных a и x!\n";

    while (key == 'Y' || key == 'y') {
        x = rand() % 101 - 50;
        a = rand() % 101 - 50;

        cout << "X: " << x << "\n"<< "A: " << a;

        cout << "\nabs x: " << abs(x);
        cout << "\nabs a: " << abs(a);

        w = calcW(x, a);
        cout << "\nW = " << w;

        cout << "\nХочешь еще разок? (Y или N): ";
        cin >> key;
    }

    return 0;
}