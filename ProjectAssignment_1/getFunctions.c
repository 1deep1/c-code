/*
Проектное задание №1
Код калькулятора корней функций
@see calcFunctions.c
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int getY(char *str, char *y) {
    int i;

    for (i = 9;  i < (int)strlen(str) && str[i] != '='; i++) ;
    if ('(' == str[i-2])
        *y = str[i-1];
    else
        *y = str[i+1];       
    return 0;
}

int getAX(char *str, char *x, int *a) {
    int i;

    for (i = 8; i < (int)strlen(str) && str[i] != '*'; i++) ;
    if (1 == isdigit(str[i+1])){
        *x = str[i-1];
        *a = atoi((char *)(&str[i+1]));
    }
    else {
        *x = str[i+1];
        for (i--; str[i] != '(' && 1 == isdigit(str[i]); i--);
        i++;
        *a = atoi((char *)(&str[i]));
    }

    return 0;
}

int getB(char *str, int *b) {
    int i;
    
    for (i = 9; i < (int)strlen(str) && str[i] != '*' && str[i] != '+'; i++) ;
    if ('*' == str[i]){
        for(i++; i < (int)strlen(str) && str[i] != '+'; i++) ;
        *b = atoi((char *)(&str[i+1]));
    }
    else {
        for (i--; str[i] != '(' && 1 == isdigit(str[i]); i--) ;
        *b = atoi((char *)(&str[i+1]));
    }
    
    return 0;
}