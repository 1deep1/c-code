#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int m, a_3, a_4; //обозначаем переменные
    char key = 'y';

    cout << "Hey! SPINNERS, AGAIN?! 2 task!\n";

    while (key == 'Y' || key == 'y') {
        //получаем значение m (всего лопастей)
        cout << "\nM: ";
        cin >> m;

        a_4 = m % 3; //здесь мы просто берем остаток от деления на 3
        a_3 = (m - 4 * a_4) / 3; //а тут просто посчитаем что у нас осталось из всего

        if (a_3 >= 0) { //туточки заметим, что a_3 может оказаться меньше 0 и тогда нет смысла продолжать
            cout << "\n3 blades (A_3): " << a_3; //выводим кол-во спиннеров с 3 лопостями
            cout << "\n4 blades (A_4): " << a_4; //выводим кол-во спиннеров с 4 лопостями
        }
        else {
            cout << "\nNo solution, sorry";
        }

        cout << "\n\nAgain? (Y or N): ";
        cin >> key;
    }

    return 0;
}