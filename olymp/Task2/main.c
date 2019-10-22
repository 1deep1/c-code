#include <stdio.h>
//Решение неверно
int main() {
    int a, b, c = 0;

    scanf("%d\n%d", &a, &b);

    if (a % 2 == 0 && b % 2 == 0) {
        c = (b - a) / 2 + a;}
    else if (a % 2 == 0 && b % 2 != 0) {
        c = (b + a) / 2 - 1;}
    else if (a % 2 != 0 && b % 2 == 0) {
        c = (b - a) / 2;}
    else if (a % 2 != 0 && b % 2 != 0) {
        c = (b - a - 1) / 2;}

    printf("%d", c);
    return 0;
}