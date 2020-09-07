/*
МИРЭА - Задание 3

@author Eg0r.Grachev
@link https://github.com/tRexSTYT/c-code
*/

#include <stdio.h>

int main() {
    int d, s, x; //объявление переменных

    scanf("%d", &d); //ввод кол-ва детей
    scanf("%d", &s); //ввод кол-ва шоколада

     x = s / d; //расчет по формуле

    printf("%d", x); //вывод

    return 0; //успешное завершение
}