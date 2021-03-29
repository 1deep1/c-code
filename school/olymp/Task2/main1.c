#include <stdio.h>
//Решение верно
int main(){
    int a, b, res = 0;
    scanf("%d%d", &a, &b);
    for(a; a <= b; a++){
        if(a % 2 == 1)
            res -= a;
        if(a % 2 == 0)
            res += a;
    }
    printf("%d", res);
    return 0;
}