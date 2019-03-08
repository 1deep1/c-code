/*
Код с дополнительными и сложными вычислениями
Проектное задание №0
Калькулятор на языке Си с возможностями:
Сложение, вычитание, умножение, деление, извлечения корня квадратного из числа,
деления чисел нацело со взятием результата-частного, геометрическая последовательность

@author Eg0r.Grachev
@link https://github.com/tRexSTYT/c-code
@link http://moria.1586.su/moodle/mod/page/view.php?id=1705
*/
#include <stdio.h>

/*
@example (Деление чисел) 5 / 5 = 1;
@param (firstNum) делимое, (secondNum) делитель, (*error) код ошибки;
@return firstNum/secondNum || 0;
@throws (0) ошибок нет, (-2) ошибка деления на 0 | *error;
*/
double divide(double firstNum, double secondNum, int *error) {
    if (0==secondNum) {
        *error = -2;
        return 0;
    }
    error = 0;
    return firstNum/secondNum;
}

/*
@example для описания примера использования;
@param для описания аргументов функции;
@return для описания возвращаемых значений функции;
@throws для описания обрабатываемых ошибок и работой с отслеживанием ошибок;
*/
double computeSqrt() {
    return 0;
}

/*
@example для описания примера использования;
@param для описания аргументов функции;
@return для описания возвращаемых значений функции;
@throws для описания обрабатываемых ошибок и работой с отслеживанием ошибок;
*/
double intDivide() {
    return 0;
}

/*
@example для описания примера использования;
@param для описания аргументов функции;
@return для описания возвращаемых значений функции;
@throws для описания обрабатываемых ошибок и работой с отслеживанием ошибок;
*/
double computeProgression() {
    return 0;
}