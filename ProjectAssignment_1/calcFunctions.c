/*
Проектное задание №1
Код калькулятора корней функций
@see main.c
*/
#include "getFunctions.c"
//#include "errorChecker.c"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/*
Парсинг SET
*/
void parseSet(char *str, char *argName, int *argValue, int *argCount) {
    int i;

    for (i = 4;  i < (int)strlen(str) && str[i] != '='; i++);
    if (1 == isdigit(str[i+1])){
        argValue[*argCount] = atoi((char *)(&str[i+1]));
        argName[*argCount] = str[i-1];
    }
    else {
        argValue[*argCount] = atoi((char *)(&str[4]));
        argName[*argCount] = str[i+1];
    }
    (*argCount)++;
}

/*
Парсинг Function
@uses getFunctions.c
*/
void parseFunc(char *str, int *a, int *b, char *x, char *y) {
    getY(str, y);
    getAX(str, x, a);
    getB(str, b);
}

/*
Функция итогового вывода
@uses errorChecker.c
*/
void computeFunc(char *argName, int *argValue, int argCount, int a, int b, char x, char y) {for (int i = 0; i < argCount; i++) {
        if (y == argName[i]) {
            /*
            *errorCode = -2;
            checkError(&errorCode);
            */
            printf("CANNOT SET CONSTANT\n");
        }
        else if (x != argName[i]) printf("HAVE NO '%c' VARIABLE\n", argName[i]);
        else if (y == argName[i] && x == argName[i]) {
            /*
            *errorCode = -3;
            checkError(&errorCode);
            */
            printf("HAVE NO FUNCTION AT ALL\n");
        }
        else {
            printf("%c(%d) = %d\n", y, argValue[i], argValue[i] * a + b);
        }
    }
}