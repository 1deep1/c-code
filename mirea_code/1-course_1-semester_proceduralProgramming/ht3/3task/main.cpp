#include <iostream>
#include <fstream>

#define    MAXLEN_STR 256
#define    ROW_COUNT 100

using namespace std;

int main() {
    ofstream file;
    char *path = "file.txt";
    char S[ROW_COUNT][MAXLEN_STR];
    int str_num = 0; 

    // /Users/deep/Documents/Programs/c-code/mirea_code/ht3/3task/

    file.open("file.txt");
    file << "It’s alive, it’s ALIVE…!";
    file.close();

    ifstream in(path);
        while (!in.eof()){
          in.getline(S[str_num++], MAXLEN_STR);
        }
    in.close();

    for (int i=0; i<str_num; i++){
        cout << S[i] << '\n';
    }

    return 0;
}