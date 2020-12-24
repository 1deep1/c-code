#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    char key = 'y';
    int m, n;

    cout << "Numbers. 1 task. Pythagoras's numbers.\n";

    while (key == 'Y' || key == 'y') {
        cout << "\nM: ";
        cin >> m;
        cout << "N: ";
        cin >> n;

        cout << "\nPythagoras's numbers from " << m << " to " << n << endl;

        if (m > n) {
            int temp = n;
            n = m;
            m = temp;
        }

        for (int i = m; i <= n; i++) {
            for (int k = m; k <= n; k++) {
                for (int l = m; l <= n; l++) {
                    if (i*i + k*k == l*l) {
                        cout << "[" << i << "; " << k << "; " << l << ";]" << endl;
                    }
                }
            }
        }

        cout << "\nAgain? (Y or N): ";
        cin >> key;
    }

    return 0;
}