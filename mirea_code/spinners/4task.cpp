#include <iostream>

using namespace std;

#define  ARR_LENGTH 55

//вот эта штучка определяет в каком купе находится место
int find_compartment(int c) {
    if (c <= 36) {
        return (c - 1) / 4;
    }
    else {
        return 8 - (c - 37) / 2;
    }
}

int main() {
    setlocale(LC_ALL, "rus");
    int n, _n; //обозначаем n
    int counter[ARR_LENGTH], answer, current; //заводим другие переменные для работы
    char key = 'y';

    cout << "Hey! SpeedWagoooon mmmm!) 4 task!\n";

    while (key == 'Y' || key == 'y') {
        //получаем значение n, которое скажет сколько чисел пойдет на вход
        cout << "\nN: ";
        cin >> n;

        answer = 0;
        current = 0;

        for (int i = 0; i < ARR_LENGTH; i++) { //обнуляем весь массив счетчика
            counter[i] = 0;
        }

        for (int i = 0; i < n; i++) { //здесь в нашем счетчике мы считаем сколько мест свободно в конкретном купе, обращаясь к функции find_compartment
            cin >> _n;
            counter[find_compartment(_n)] += 1;
        }

        for (int i = 0; i < 9; i++) { //здесь уже проверяем все 9 купе и если в каком-то будут свободны все 6, то к ответу добавляем 1 и двигаемся дальше
            cout << "\n [" << i << "]: " << counter[i]; //это так, просто для отчетности
            if (counter[i] == 6) {
                current += 1;
                if (answer < current) answer = current;
            }
            else {
                current = 0;
            }
        }

        cout << "\nAnswer: " << answer << endl; //получаем долгожданный ответ

        cout << "\nAgain? (Y or N): ";
        cin >> key;
    }

    return 0;
}