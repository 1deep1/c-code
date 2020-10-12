#include <iostream>

using namespace std;

int main() {
    char time, curtains, lamp;
    char key = 'y';
    
    cout << "Ку! Могу ответить светло ли в комнате\n(вводить только Y или N)\n";

    while (key == 'y' || key == 'Y') {
        cout << "\nНа улице день?\n";
        cin >> time;

        cout << "\nЛампа включена?\n";
        cin >> lamp;

        if (lamp == 'y' || lamp == 'Y') {
            cout << "\nВ комнате светло!";
        }
        else if (lamp == 'n' || lamp == 'N') {
            cout << "\nА шторы раздвинуты?\n";
            cin >> curtains;

            if (curtains == 'n' || curtains == 'N') {
                
            }
        }
        else {
            cout << "Неверный ввод!";
        }

        cout << "\nВы хотите продолжить? (Y или N): ";
        cin >> key;
    }

    return 0;
}