#include <iostream>
#include <cstdlib>
#include <cmath>
#include <math.h>
//#include "calc.cpp"

using namespace std;

double calcW(int x, int a) {
    double xD = 1.0 * x, aD = 1.0 * a;
    //double endSqrt = aD - (xD * xD);

    /*
    cout << "\nxD = " << xD;
    cout << "\naD = " << aD;

    cout << "\nabsXD = " << abs(xD);
    cout << "\nlogXD = " << log(xD);
    cout << "\nendSqrt = " << endSqrt;
    cout << "\nsqrt = " << sqrt(endSqrt);
    */
    
    if (abs(xD) < 1) {
        return aD * log(xD);
    }
    else if (abs(xD) >= 1) {
        return sqrt(aD - (xD * xD));
    }
    else {
        return 0;
    }
}

int main() {
    srand((unsigned int) time(NULL));
    int x, a;
    double w;

    int error = 0;
    char key = 'y';

    cout << "Привет! Вычислю для тебя W для произвольных a и x!\n";

    while (key == 'Y' || key == 'y') {
        x = rand() % 101 - 50;
        a = rand() % 101 - 50;

        cout << "X: " << x << "\n"<< "A: " << a;

        w = calcW(x, a);
        cout << "\nW = " << w;

        cout << "\nХочешь еще разок? (Y или N): ";
        cin >> key;
    }

    return 0;
}