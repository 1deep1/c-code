/*
МИРЭА - Задание 1

@author Eg0r.Grachev
@link https://github.com/tRexSTYT/c-code
*/

#include <stdio.h>

int main() {
    int v, t, x; //объявление переменных

    scanf("%d", &v); //ввод скорости
    scanf("%d", &t); //ввод времени

    x = (v * t) % 45; //расчет по формуле

    printf("%d", x); //вывод

    return 0; //успешное завершение
}