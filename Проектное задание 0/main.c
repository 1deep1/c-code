/*
Проектное задание №0
Калькулятор на языке Си с возможностями:
Сложение, вычитание, умножение, деление, извлечения корня квадратного из числа,
деления чисел нацело со взятием результата-частного, геометрическая последовательность

@author Eg0r.Grachev
@link https://github.com/tRexSTYT/c-code
@link http://moria.1586.su/moodle/mod/page/view.php?id=1705
*/
#include <stdio.h>
#include "complexCalc.c"
#include <math.h>

/*
@return Возвращает код ошибки в систему;
@throws (-1) ошибка ввода, (-2) ошибка деления на 0 | *error;
*/
int main() {
    double firstNum, secondNum, result;
    int error;
    char mark = 0;

    while(mark != 'E') {
        error = 0;
        //Обработка ошибок
        switch (error) {
            case -1:
                printf("Input error\n");
                break;
            case -2:
                printf("It is impossible to divide by 0!\n");
                break;
        }

        scanf("%lg %c %lg", &firstNum, &mark, &secondNum);
        switch (mark) {
            case '+':
                printf("%lg + %lg = %lg\n", firstNum, secondNum, firstNum + secondNum);
                break;
            case '-':
                printf("%lg - %lg = %lg\n", firstNum, secondNum, firstNum - secondNum);
                break;
            case '*':
                printf("%lg * %lg = %lg\n", firstNum, secondNum, firstNum * secondNum);
                break;
            case '/':
                result = divide(firstNum, secondNum, &error);
                if (0 == error) printf("%lg / %lg = %lg\n", firstNum, secondNum, result);
                break;
            case 'G':
                break;
            case 'D':
                break;
            case 'S':
                printf("%lg S = %lg", firstNum, sqrt(firstNum));
                break;
            default:
                error = -1;
                break;
        }
    }
    return 0;
}
