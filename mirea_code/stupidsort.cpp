#include <iostream>

using namespace std;

#define ARR_LENGTH  10

int main() {
    setlocale(LC_ALL, "rus");

    int array1[ARR_LENGTH];
    int pail = 0;

    char key = 'y';

    cout << "Hey! Wanna see some stupid sort?\n";
    for (int k = 0; k <= 30; k++) {
        cout << "*";
    }

    while (key == 'Y' || key == 'y') {

        //Записываем различные числа в массив для дальнейшей сортировки
        for (int i = 0; i < 10; i++) {
            array1[i] = 1 + rand() & 54;
        }

        //Выводим элементы массива
        cout << "\nArray without sort: " << endl;
        for (int t = 0; t < 10; t++)
        {
            cout << array1[t] << endl;
        }

        //Сам алгоритм глупой сортировки
        for (int j = 0; j < 10; j++) {
            for (int i = 0; i < 9; i++) {
                if (array1[i] > array1[i+1]) {
                    pail = array1[i];
                    array1[i] = array1[i + 1];
                    array1[i + 1] = pail;
                }
            }
        }

        //Выводим отсортированные элементы
        cout << "\nArray sorted by stupid sort: " << endl;
        for (int t = 0; t < 10; t++) {
            cout << array1[t] << endl;
        }

        cout << "\nAgain? (Y or N): ";
        cin >> key;
    }

    return 0;
}
