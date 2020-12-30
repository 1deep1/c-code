#include <iostream>

using namespace std;

#define ARR_LENGTH  150

int main() {
    char key = 'y';

    int arrayLength, evenNumbers = 1, sum = 0, m;
    int array[ARR_LENGTH];

    while (key == 'Y' || key == 'y') {
        cout << "M: ";
        cin >> m;
        if (!m) {
            cout << "Error: M can't be 0" << endl;
            continue;
        } 
        cout << "Array length: ";
        cin >> arrayLength;

        cout << "Array values:\n";
        for(int i = 0; i < arrayLength; i++) {
            cin >> array[i];
        }

        for(int i = 0; i < arrayLength; i++) {
            if (array[i] % 2 == 0) {
                evenNumbers *= array[i];
            }
        }

        for(int i = 0; i < arrayLength; i++) {
            if (array[i] % m == 0) {
                sum += array[i];
            }
        }

        cout << "Product of even numbers: " << evenNumbers << endl;
        cout << "Sum of numbers: " << sum << endl;

        if (evenNumbers > sum) {
            cout << "Min: " << sum << endl;
        }
        else {
            cout << "Min: " << evenNumbers << endl;
        }
        

        cout << "\n\nAgain? (Y or N): ";
        cin >> key;
    }

    return 0;
}