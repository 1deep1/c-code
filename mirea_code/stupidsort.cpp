#include <iostream>

using namespace std;

#define ARR_LENGTH  10

int main() {
    setlocale(LC_ALL, "rus");

    int array1[ARR_LENGTH];
    int pail = 0;

    char key = 'y';

    cout << "Привет! Давай я тебе покажу глупую сортировку.\n";

    for (int i = 0; i < 10; i++)
        {
            array1[i] = 2 + rand() & 47;
        }

    while (key == 'Y' || key == 'y') {
        for(int j=0; j<10; j++) {
            for (int i = 0; i < 9; i++)
            {
                if (array1[i] > array1[i+1])
                {
                    pail = array1[i];
                    array1[i] = array1[i + 1];
                    array1[i + 1] = pail;
                }
            }
        }

        cout << "Отсортированный глупо массив: " << endl;
        for (int t = 0; t < 10; t++)
        {
            cout << array1[t] << endl;
        }

        cout << "\nХочешь еще разок? (Y или N): ";
        cin >> key;
    }

    return 0;
}