#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    int m, n; //обозначаем переменные
    char key = 'y';

    cout << "Hey! Not spinners, YAY! 3 task!\n";

    while (key == 'Y' || key == 'y') {
        int x = 0, y = 0;

        //получаем значение n (столбцы листа)
        cout << "\nN: ";
        cin >> n;
        //получаем значение m (строки листа)
        cout << "M: ";
        cin >> m;

        //Из входных данных мы получаем прямоугольник размером NxM
        //разбиваем все на клетки. Есть начальная клетка (start) и конечная (end).
        //нам осается лишь подсчить все с помощью двух вложенных циклов

        //здесь считаем кол-во пар для startX и endX
        for (int startX = 0; startX < n; startX++) {
            for (int endX = startX; endX < n; endX++) {
                x+=1;
            }
        }

        //здесь считаем кол-во пар для startY и endY
        for (int startY = 0; startY < m; startY++) {
            for (int endY = startY; endY < m; endY++) {
                y+=1;
            }
        }

        cout << "\nAnswer: " << x * y << endl; //получаем долгожданный ответ, перемножением результаты работы циклов

        cout << "\nAgain? (Y or N): ";
        cin >> key;
    }

    return 0;
}