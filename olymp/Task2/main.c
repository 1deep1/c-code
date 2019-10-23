#include <stdio.h>
//Решение неверно
int main() {
    int a, b, c = 0;

    scanf("%d\n%d", &a, &b);

    if (a % 2 == 0 && b % 2 == 0) {
        c = a + ((b - a) / 2);} // 2|34|56|78
    else if (a % 2 == 0 && b % 2 != 0) {
        c = a - b + ((b - a) / 2);} // 2|34|56|7
    else if (a % 2 != 0 && b % 2 == 0) {
        c = (b - a) / 2 + 1;} // 12|34|56|78
    else if (a % 2 != 0 && b % 2 != 0) {
        c = ((b - a) / 2) - b;}

    printf("%d", c);
    return 0;
}