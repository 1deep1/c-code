/*
Проектное задание №0
Калькулятор на языке Си с возможностями:
Сложение, вычитание, умножение, деление, извлечения корня квадратного из числа,
деления чисел нацело со взятием результата-частного,
геометрическая последовательность

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
        //Обработка ошибок
        switch (error) {
            case -1:
                printf("Input error\n");
                break;
            case -2:
                printf("It is impossible to divide by 0!\n");
                break;
            case -3:
                printf("The multiplier must be greater than 0!\n");
                break;
            case -4:
                printf("Square root cannot be less than 0!\n");
                break;
            case -5:
                printf("Your mom gay and n must be greater or equal to a0!\n");
                break;
        }

        error = 0;

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
                computeProgression(firstNum, secondNum, &error);
                break;
            case 'D':
                result = intDivide(firstNum, secondNum, &error);
                if (0 == error) printf("%lg D %lg = %lg\n", firstNum, secondNum, result);
                break;
            case 'S':
                if (firstNum >= 0) printf("%lg S = %lg\n", firstNum, sqrt(firstNum));
                else error = -4;
                break;
            default:
                error = -1;
                break;
        }
    }
    return 0;
}
