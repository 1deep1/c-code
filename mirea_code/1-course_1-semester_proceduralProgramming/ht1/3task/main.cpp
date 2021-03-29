#include <iostream>

using namespace std;
 
int main() {
    long double x=0, b, c, result;
    char key = 'y';

    cout << "Салют! Легко найду для тебя X в уравнении bx+c=0\n";

    while (key == 'Y' || key == 'y') {
        cout << "Введи b: ";
        cin >> b;
        cout << "Введи c: ";
        cin >> c;

        if (0==b) {
            cout << "Прости, невозможно решить(";
        }
        else {
            result = (-c) / b;
            cout << "X = " << result << endl;
        }
        
        cout << "Хочешь еще разок? (Y или N): ";
        cin >> key;
    }

    return 0;
}