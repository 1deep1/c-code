#include <iostream>
#include "calc.cpp"

using namespace std;

int main() {
    long double h, rBig, r, l;
    long double v, s;
    int error = 0;
    char key = 'y';

    cout << "Привет! Вычислю для тебя объем и полную поверхность усеченного конуса!\n";

    while (key == 'Y' || key == 'y') {
        cout << "\nВведи пожалуйста высоту h: ";
        cin >> h;
        cout << "Введи пожалуйста радиус R: ";
        cin >> rBig;
        cout << "Введи пожалуйста r: ";
        cin >> r;
        cout << "Введи пожалуйста l: ";
        cin >> l;

        s = calcS(rBig, r, l);
        v = calcV(rBig, r, h);

        cout << "\nS = " << s;
        cout << "\nV = " << v;

        cout << "\nХочешь еще разок? (Y или N): ";
        cin >> key;
    }

    return 0;
}