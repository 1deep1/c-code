/*
МИРЭА - Задание 7

@author Eg0r.Grachev
@link https://github.com/tRexSTYT/c-code
*/

#include <stdio.h>

int main() {
    int x, day; //объявление переменных

    scanf("%d", &x);

    day = (x - 5) / 2 + 1;

    printf("%d", day);

    return 0; //успешное завершение
}