/*
МИРЭА - Задание 4

@author Eg0r.Grachev
@link https://github.com/tRexSTYT/c-code
*/

#include <stdio.h>

int main() {
    long x; //объявление переменных

    scanf("%ld", &x); //ввод числа

    x = (x % 100) / 10; //расчет по формуле

    printf("%ld", x); //вывод

    return 0; //успешное завершение
}