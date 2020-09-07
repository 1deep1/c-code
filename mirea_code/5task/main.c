/*
МИРЭА - Задание 5

@author Eg0r.Grachev
@link https://github.com/tRexSTYT/c-code
*/

#include <stdio.h>
#include <math.h>

int main() {
    int x, y; //объявление переменных

    scanf("%d\n%d", &x, &y); //ввод x, y

    if (y == sqrt(x) - 2 || y == x || y == -x) {
        printf("YES\n");
    }
    else {
         printf("NO\n");
    }

    return 0; //успешное завершение
}