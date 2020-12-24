#include <iostream>
#include <math.h>

using namespace std;

long double calcS(long double rBig, long double r, long double l) {
    return M_PI * ( (rBig * rBig) + (rBig + r) * l + (r * r) );
}

long double calcV(long double rBig, long double r, long double h) {
    long double answer;

    //answer = M_PI;
    answer = (1.0 / 3.0) * M_PI * h * ( (rBig * rBig) + rBig * r + (r * r) );

    return answer;
}

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