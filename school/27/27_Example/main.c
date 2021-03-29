//@link https://inf-ege.sdamgia.ru/problem?id=7772
#include <stdio.h>

#define D  8

int main() {
    int a[D-1], N, x, mx = 0, m = 0, i;

    scanf("%d", &N);
    for (i=1; i <= D; i++) {
        scanf("%d", &x);
        a[i % D] = x;
    }
    for (i=D; i <= N; i++) {
        scanf("%d", &x);
        if (a[i%D] > mx) mx = a[i%D];
        if (x*mx > m) m = x * mx;
        a[i%D] = x;
    }
    printf("\n%d\n", m);
    printf("SUCK IT");
    scanf("%d", &N);
}