#include <iostream>

using namespace std;

void eratosthenesFunc(bool array[], int limit) {
    int i, j;

    for (j = 2; j <= limit; j++) array[j] = true;
    j = 2;

    while (j * j <= limit) {
        i = j * j;
        if (array[j]) {
            while (i <= limit) {
                array[i] = false;
                i = i + j;
            }
        }
        j = j + 1;
    }

    cout << "List of numbers:";
    for (j = 2; j <= limit; j++) {
        if (array[j]) cout << " " << j;
    }
}

int main() {
    char key = 'y';
    int limit;

    cout << "Check this out. Sieve of Eratosthenes.\n";

    while (key == 'Y' || key == 'y') {
        cout << "\nLimit: ";
        cin >> limit;

        bool *array = new bool[limit];
        eratosthenesFunc(array, limit);

        cout << "\n\nAgain? (Y or N): ";
        cin >> key;
    }
    
    return 0;
}