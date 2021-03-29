#include <iostream>

using namespace std;

#define STR_LENGTH  150

int main() {
    setlocale(LC_ALL, "rus");
    char key = 'y';
    char s[STR_LENGTH];

    cout << "Hey! I'll find for you maximum word length.\n";

    while (key == 'Y' || key == 'y') {
        cin.getline(s, STR_LENGTH);
        size_t maxlen = 0;
        char * maxidx = nullptr;

        for(char * c = s; *c;) {
            while(*c == ' ') ++c;
            if (*c == 0) break;
            char * begin = c;
            while(*c && *c != ' ') ++c;
            if (maxlen < (c - begin)) {
            maxlen = c - begin;
            maxidx = begin;
            }
        }
        if (maxlen == 0) {
            cout << "Empty line!\n";
        }
        else {
            *(maxidx+maxlen) = 0;
            cout << maxidx;
        }

        cout << "\n\nAgain? (Y or N): ";
        cin >> key;
    }
    
    return 0;
}