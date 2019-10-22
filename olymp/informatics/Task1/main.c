#include <stdio.h>

int main(int argc, const char * argv[]) {
    int k, a, b, c, d;
    scanf("%d", &k);
    
    d = (k - (k%10)) / 1000;
    c = ((k - (k%10)) / 100) - (d*10);
    b = ((k - (k%10)) / 10) - (((k - (k%10)) / 100)*10);
    a = k - (k/10) * 10;
    printf("%d", a+b+c+d);
    return 0;
}