/*
МИРЭА - Задание 6

@author Eg0r.Grachev
@link https://github.com/tRexSTYT/c-code
*/

#include <stdio.h>

int main() {
    int count = 30, x = 0; //объявление переменных

    printf("Все числа кратные 3 (счетчик до 31):\n");

    for (int i = 1; i <= count; i++) //запуск цикла
    {
        x = 3 * i;
        printf("%d, ", x);
    }
    printf("%d;", 3 * (count + 1));

    return 0; //успешное завершение
}