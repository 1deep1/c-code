#include <stdio.h>

int main() {
    int h, a, b, c;

    scanf("%d\n%d\n%d", &h, &a, &b);
    c = h - a + b;
    if (c >= 24) c-=24;
    if (c < 0) c+=24;
    printf("%d", c);
    return 0;
}