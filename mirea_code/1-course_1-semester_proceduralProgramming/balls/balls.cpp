#include <iostream>
#include <math.h>

using namespace std;

//функция расчет фактериала
long long fact(int f) {
    if(f < 0)
        return 0;
    if (f == 0)
        return 1;
    else //просто фигачим рекрсию
        return f * fact(f - 1);
}

int main() {
    setlocale(LC_ALL, "rus");
    char key = 'y';
    int n;
    long long answer;

    cout << "Problem about balls. What? Yeah, balls.\n";

    while (key == 'Y' || key == 'y') {
        //получаем на вход наш прекрасный N
        cout << "\nN: ";
        cin >> n;

        //следствие из нахождения количества беспорядков.
        answer = fact(n) - ( fact(n) / exp(1.0) );

        //cout << fact(4) * (1 / fact(0) - 1 / fact(1) + 1 / fact(2) - 1 / fact(3) + 1 / fact(4));

        cout << "\nSituations: " << answer;

        cout << "\nAgain? (Y or N): ";
        cin >> key;
    }

    return 0;
}