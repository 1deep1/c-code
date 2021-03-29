#include <iostream>
#include <math.h>

using namespace std;

int main() {
    long double a, b, c;
    long double x, d;
    char key = 'y';

    cout << "Хей! Решить квадратное уравнение?\n\n";

    while (key == 'Y' || key == 'y') {
        cout << "Введи A: ";
        cin >> a;

        cout << "Введи B: ";
        cin >> b;

        cout << "Введи C: ";
        cin >> c;

        d = b * b - 4 * a * c;

        if (d > 0) {
            x = ((-b + sqrt(d)) / (2 * a));
            cout << "Первый корень: " << x << endl;
            x = ((-b - sqrt(d)) / (2 * a));
            cout << "Второй корень: " << x << endl;
        }
        else if (0==d) {
            x = ((-b + sqrt(d)) / (2 * a));
            cout << "Корень: " << x << endl;
        }
        else if (d < 0) {
            cout << "Дискриминант меньше 0\n";
        }

        cout << "Хочешь еще разок? (Y или N): ";
        cin >> key;
    }

    return 0;
}