//@link https://inf-ege.sdamgia.ru/problem?id=6202
#include <stdio.h>

/*
Сначала запускаем цилк, который закончит свое выполнение, как input станет 0.
Внутри цикла проверяем каждое введеное число. Произведение 2 чисел будет кратно 7 и не кратно 49 только тогда,
когда один сомножитель кратен 7 и не кратен 49, а другой не кратен 7. А максимальное произведение
можно получить с помощью двух максимальных сомножителей. После всех проверок получаем контрольно значение,
результат вычислений и выводим отчет.
*/
int main() {
    int input = 1, max1 = 0, max2 = 0, result, userResult, counter = 0;

    while (input != 0) {
        scanf("%d", &input);
        counter++;
        if (input % 7 != 0 && input > max1) {
            max1 = input;
        }
        if (input % 7 == 0 && input % 49 !=0 && input > max2) {
            max2 = input;
        }
    }
    scanf("%d", &userResult);
    result = max1 * max2;
    if (result == 0) {
        result = 1;
    }
    printf("Введено чисел: %d\nКонтрольное значение: %d\nВычисленное значение: %d\n", counter-1, userResult, result);
    if (result == userResult) {
        printf("Значения совпали");
    }
    else {
        printf("Значения не совпали");
    }
    return 0;
}