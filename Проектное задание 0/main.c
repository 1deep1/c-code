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

/*
@return Возвращает код ошибки в систему;
@throws (-1) ошибка ввода, (-2) ошибка деления на 0 | *error;
*/
int main() {
    double firtsNum, secondNum;
    int error;
    char mark;

    while(mark != 'E') {
        scanf("%lg %c %lg", &firtsNum, &mark, &secondNum);
        switch (mark) {
            case '+':
                printf("%lg + %lg = %lg\n", firtsNum, secondNum, firtsNum + secondNum);
                error = 0;
                break;
            case '-':
                printf("%lg - %lg = %lg\n", firtsNum, secondNum, firtsNum - secondNum);
                error = 0;
                break;
            case '*':
                printf("%lg * %lg = %lg\n", firtsNum, secondNum, firtsNum * secondNum);
                error = 0;
                break;
            case '/':
                printf("%lg / %lg = %lg\n", firtsNum, secondNum, divide(firtsNum, secondNum, &error));
                break;
            default:
                error = -1;
                break;
        }

        //Обработка ошибок
        switch (error) {
            case -1:
                printf("Input error\n");
                break;
            case -2:
                printf("It is impossible to divide by 0!\n");
                break;
        }
    }
    return 0;
}