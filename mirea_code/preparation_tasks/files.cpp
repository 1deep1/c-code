#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    char key = 'y';

    cout << "Files. 1 task. Toy story (sorry, not from Pixar).\n";

    while (key == 'Y' || key == 'y') {
        string line;
        int counter=0;
        ifstream toysFile ("I:/Projects/Programms/c-code/mirea_code/preparation_tasks/toys.txt");
        if (toysFile.is_open()) {
            cout << "\nAll toys: \n";
            while ( getline (toysFile,line) ) {
                while (toysFile >> toyName[counter]) {
                    toysFile >> price >> ageFrom >> ageTo;
                    cout << toyName << " " << price << "rub. " << ageFrom << "-" << ageTo << endl;
                    counter++;
                }
            }
            toysFile.close();
        }
        else {
            cout << "\nCan't open the file. Sorry";
        }

        cout << "\nAgain? (Y or N): ";
        cin >> key;
    }

    return 0;
}