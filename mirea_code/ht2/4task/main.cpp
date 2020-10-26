#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
    srand(time(NULL));
    int N;

    int error = 0;
    char key = 'y';

    cout << "Привет! Давай поиграем в армию. Числа в ряд становись!\n";

    while (key == 'Y' || key == 'y') {
        N = rand() % 10 + 1;

        cout << "N: " << N;

        cout << "\nХочешь еще разок? (Y или N): ";
        cin >> key;
    }

    return 0;
}