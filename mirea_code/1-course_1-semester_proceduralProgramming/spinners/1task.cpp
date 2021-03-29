#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int a, b, c, n; //обозначаем переменные
    char key = 'y';

    cout << "Hey! SPINNERS! 1 task!\n";

    while (key == 'Y' || key == 'y') {
        //получаем значение a, b, c
        cout << "\nA: ";
        cin >> a;
        cout << "B: ";
        cin >> b;
        cout << "C: ";
        cin >> c;

        n = (c - a) / b;
        /*Нам известно, что покупатель не будет платить за спиннер,
        если его цена больше C. Мы берем эту максимальную стоимость C и
        вычитаем из нее основание A, так-как нам интересны только лопасти. Затем просто делим
        это на стоимость одной лопасти B и благодаря C++ мы получим целочисленный ответ, с окурлением вниз.*/

        cout << "\nMaximum number of blades (N): " << n; //выводим ответ

        cout << "\n\nAgain? (Y or N): ";
        cin >> key;
    }

    return 0;
}