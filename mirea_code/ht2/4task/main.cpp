#include <iostream>

#define A_LENGTH    9

using namespace std;

int main() {
    int N, A[A_LENGTH];

    int error = 0;
    char key = 'y';

    cout << "Привет! Давай поиграем в армию. Числа в ряд от N становись!\n";

    while (key == 'Y' || key == 'y') {
        cout << "Введите N: ";
        cin >> N;
        cout << "\nПоследовательность от " << N << ": ";

        if (N < -9) {
            cout << "Прости, не моху.";
        }
        else {
            for (int i = 1; i <= A_LENGTH + 1; i++) {
                A[i] = N + i;
                cout << A[i] << " ";
            }
            cout << ";";
        }

        cout << "\n\nХочешь еще разок? (Y или N): ";
        cin >> key;
    }

    return 0;
}