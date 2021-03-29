#include <iostream>
#include <stdlib.h>
#include <time.h>

#define N_LENGTH    9

using namespace std;

int main() {
    srand(time(NULL));
    int N[N_LENGTH];

    int error = 0;
    char key = 'y';

    cout << "Привет! Давай поиграем в армию. Числа в ряд становись!\n";

    while (key == 'Y' || key == 'y') {
        for (int i = 0; i <= N_LENGTH; i++) {
            N[i] = rand() % 10 + 1;
            cout << "\nN[" << i << "] = " << N[i];
        }

        cout << "\nХочешь еще разок? (Y или N): ";
        cin >> key;
    }

    return 0;
}