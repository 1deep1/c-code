#include<iostream>
 
using namespace std;
 
int main()
{
    setlocale(LC_ALL, "Russian");

    string name;

    cout << "Приветик. Как звать?\nИмя: ";
    cin >> name;
    cout << "О, круто! Теперь я знаю, что тебя зовут " << name << endl;

    return 0;
}