#include <iostream>
#include "calc.cpp"
 
using namespace std;
 
int main()
{
    setlocale(LC_ALL, "Russian");

    long double num1=0, num2=0, resultSum, resultSub, resultMulti, resultDiv;
    int error = 0;
    char key = 'y';

    cout << "Приветик. Я калькулятор!) Круто, да?\nВведи два любых числа:";

    while (key == 'Y' || key == 'y') {
        cout << "\n\nПеврое число: ";
        cin >> num1;
        cout << "Второе число: ";
        cin >> num2;

        resultSum = sum(num1, num2, &error);
        resultSub = sub(num1, num2, &error);
        resultMulti = multi(num1, num2, &error);
        resultDiv = div(num1, num2, &error);

        switch (error)
        {
            default:
                cout << "\nСумма: " << resultSum << "\nРазность: " << resultSub << "\nУмножение: " << resultMulti << "\nДеление: " << resultDiv << endl;
                break;
            case -1:
                cout << "\nСумма: " << resultSum << "\nРазность: " << resultSub << "\nУмножение: " << resultMulti << "\nДеление: ОШИБКА! Делить на 0 нельзя." << endl;
                break;
        }

        error = 0;

        cout << "\nВы хотите продолжить? (Y или N): ";
        cin >> key;

    }
    return 0;
}