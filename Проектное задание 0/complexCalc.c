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
    *error = 0;
    return firstNum/secondNum;
}

/*
@example (Извлечения корня квадратного из числа) 256 S = 16;
@param (firstNum) число, (*error) код ошибки;
@return result || 0;
@throws (0) ошибок нет | *error;
*/
double computeSqrt() {
    return 0;
}

/*
@example (Деления двух чисел нацело со взятием результата-частного) 5 D 3 = 1;
@param (firstNum) делимое, (secondNum) делитель, (*error) код ошибки;
@return firstNum/secondNum || 0;
@throws (0) ошибок нет, (-2) ошибка деления на 0 | *error;
*/
double intDivide() {
    return 0;
}

/*
@example (Геометрическая последовательность) ;
@param (firstNum) a0, (secondNum) множитель;
@return  0;
@throws (0) ошибок нет, (-3) ошибка создания последовательности | *error;
*/
double computeProgression() {
    return 0;
}