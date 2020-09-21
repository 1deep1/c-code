#include <iostream>
#include <math.h>
#include <ctype.h>

using namespace std;

int main() {
    long double a, b, c;
    long double x, d;
    char key = 'y';

    cout << "Хей! Решить квадратное уравнение?\n\n";

    while (key == 'Y' || key == 'y') {
        cout << "Введи A: ";
        cin >> a;
        //cout << isdigit(a);
        if (!isdigit(a)) {
            a = 0;
            cout << "В A должно быть число.\n";
            break;
        }

        cout << "Введи B: ";
        cin >> b;

        if (!isdigit(b)) {
            b = 0;
            cout << "В B должно быть число.\n";
            break;
        }

        cout << "Введи C: ";
        cin >> c;

        if (!isdigit(c)) {
            c = 0;
            cout << "В C должно быть число.\n";
            break;
        }

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