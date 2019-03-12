/*
Код с дополнительными и сложными вычислениями
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
#include <math.h>

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
@example (Деления двух чисел нацело со взятием результата-частного) 5 D 3 = 1;
@param (firstNum) делимое, (secondNum) делитель, (*error) код ошибки;
@return firstNum/secondNum || 0;
@throws (0) ошибок нет, (-2) ошибка деления на 0 | *error;
*/
int intDivide(int firstNum, int secondNum, int *error) {
    if (0==secondNum) {
        *error = -2;
        return 0;
    }
    *error = 0;
    return firstNum/secondNum;
}

/*
@example (Геометрическая последовательность) 2 G 2 8 = 2 ... 256;
@param a0, (q) множитель;
@throws (0) ошибок нет, (-3) множитель меньше 1, (-5) невреный n | *error;
*/
void computeProgression(int a0, int q, int *error) {
    int n, sum = 0, composition = 1;
    if (q > 0) {
        scanf("%d", &n);
        if (n >= a0) {
            for (int i = a0; i <= n; i++){
                a0 *= q;
                sum += a0;
                composition *= a0;
                printf("%d ", a0);
            }

            printf("\nSum: %d", sum);
            printf("\nComposition: %d\n", composition);
        } else *error = -5;
    } else *error = -3;
}