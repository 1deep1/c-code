#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double s = 0, p = 0, n = 0, r, m, rN, m1, m2;

    int error = 0;
    char key = 'y';

    cout << "Привет! Давай узнаем месячную выплату по твоему займу.\n\n";

    while (key == 'Y' || key == 'y') {
        cout << "Введи S (сумма): ";
        cin >> s;
        if (s <= 0) {
            cout << "Сумма займа не может быть отрицательной или равной 0.\n\n";
            continue;
        }
        cout << "Введи p (процент): ";
        cin >> p;
        if (p <= 0 || p > 100) {
            cout << "Процент займа должен быть в промежутке от 0 до 100.\n\n";
            continue;
        }
        cout << "Введи n (лет): ";
        cin >> n;
        if (n <= 0) {
            cout << "Время займа не может быть отрицательным или равным 0.\n\n";
            continue;
        }

        r = p/100;
        //cout << r << endl;
        rN = pow(r+1, n);
        //cout << rN << endl;
        m1 = s*r*rN;
        //cout << m1 << endl;
        m2 = (rN-1)*12;
        //cout << m2 << endl;

        m = m1/m2;
        //cout << m << endl;

        cout << "\nМесячная выплата по займу в " << s << " рублей на " << n << " лет под " << p << "% составит: " << m << " рублей." << endl;

        cout << "\nХочешь еще разок? (Y или N): ";
        cin >> key;
    }

    return 0;
}