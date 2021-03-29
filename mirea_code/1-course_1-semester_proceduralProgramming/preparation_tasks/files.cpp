#include <iostream>
#include <fstream>
#include <string>

#define    ARR_LENGTH 50

using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    char key = 'y';

    cout << "Files. 1 task. Toy story (sorry, not from Pixar).\n";

    while (key == 'Y' || key == 'y') {
        string line;
        int counter=0, max=0, l=0;
        string toyName[ARR_LENGTH];
        int price[ARR_LENGTH], ageFrom[ARR_LENGTH], ageTo[ARR_LENGTH];

        ifstream toysFile ("I:/Projects/Programms/c-code/mirea_code/preparation_tasks/toys.txt");
        if (toysFile.is_open()) {
            cout << "\nAll toys: \n";
            while ( getline (toysFile,line) ) {
                while (toysFile >> toyName[counter]) {
                    toysFile >> price[counter] >> ageFrom[counter] >> ageTo[counter];
                    cout << toyName[counter] << " " << price[counter] << "rub. " << ageFrom[counter] << "-" << ageTo[counter] << endl;
                    counter++;
                }
            }
            toysFile.close();
        }
        else {
            cout << "\nCan't open the file. Sorry";
        }

        cout << "\nFiltered toys (<400, for 8 age group):\n";
        for (int i = 0; i < counter; i++) {
            if (price[i] <= 400) {
                if (8 >= ageFrom[i] && 8 <= ageTo[i]) {
                    cout << toyName[i] << endl;
                    l++;
                }
            }
        }
        if (l == 0) {
            cout << "No toys like that :c\n";
        }
        else {
            l = 0;
        }
        

        for (int i = 0; i < counter; i++) {
            if (max < price[i]) max = price[i];
        }
        cout << "\nMost expensive toy: " << max << "rub.\n";

        cout << "\nFiltered toys (for 4 and 10 age group):\n";
        for (int i = 0; i < counter; i++) {
            if (4 >= ageFrom[i] && 4 <= ageTo[i]) {
                if (10 >= ageFrom[i] && 10 <= ageTo[i]) {
                    cout << toyName[i] << " - " << price[i] << endl;
                    l++;
                }
            }
        }
        if (l == 0) {
            cout << "No toys like that :c\n";
        }
        else {
            l = 0;
        }

        cout << "\nAgain? (Y or N): ";
        cin >> key;
    }

    return 0;
}