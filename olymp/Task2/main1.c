#include <stdio.h>
//Решение верно
int main(){
    int a, b, res = 0;
    scanf("%d%d", &a, &b);
    for(int i = a; i <= b; i++){
        if(i % 2 == 1)
            res -= i;
        if(i % 2 == 0)
            res += i;
    }
    printf("%d", res);
    return 0;
}