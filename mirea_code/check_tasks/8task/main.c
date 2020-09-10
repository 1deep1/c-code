/*
МИРЭА - Задание 8

@author Eg0r.Grachev
@link https://github.com/tRexSTYT/c-code
*/

#include <stdio.h>

int main() {
    int j = -1, counter = 0; //объявление переменных

    while (j != 0) //запуск цикла
    {
        scanf("%d", &j); //берем ввод чисел
        if (j / 19) counter++; //считаем кратные
    }

    printf("%d", counter); //вывод ответа

    return 0; //успешное завершение
}