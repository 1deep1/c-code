#include <stdio.h>

int main() {
    int a, b, c = 0, n = 0;

    scanf("%d\n%d", &a, &b);
    while (a * n + 1 != b * c - 1) {
        if ((a * n + 1) < (b * c - 1)) n++;
        else c++;
    }
    printf("%d", a * n + 1);
    return 0;
}