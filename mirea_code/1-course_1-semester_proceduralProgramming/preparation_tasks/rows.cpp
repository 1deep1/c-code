#include <iostream>
#include <math.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    char key = 'y';
    int n;
    long double y=0, k=0;

    cout << "Rows. 1 task.\n";

    while (key == 'Y' || key == 'y') {
        cout << "\nN: ";
        cin >> n;

        if (n < 1) {
            cout << "N must be bigger then 0\n";
            continue;
        }

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                k += sin(j*1.0);
            }
            //cout << "K: " << k << endl;
            y += (i / k);
            k = 0;
            //cout << "Y: " << y << endl;
        }

        cout << "\nAnswer: " << y;

        cout << "\nAgain? (Y or N): ";
        cin >> key;
    }

    return 0;
}