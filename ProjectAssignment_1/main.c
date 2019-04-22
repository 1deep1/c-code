/*
Проектное задание №1

@author Eg0r.Grachev
@link https://github.com/tRexSTYT/c-code
@link http://moria.1586.su/moodle/mod/page/view.php?id=1709
*/
#include <stdio.h>
#include <string.h>
#include "errorChecker.c"
#include "calcFunctions.c"

#define ARG_AMOUNT 128

/*
Основная программа
@uses <stdio.h>, <string.h>, errorChecker.c, calcFunctions.h
*/
int main(int argc, char *argv[]) {
    int errorCode = 0, argCount = 0, argValue[ARG_AMOUNT], a, b;
    char argName[ARG_AMOUNT], x, y;

    if (argc < 2) {
        errorCode = -1;
        checkError(&errorCode);
        return 0;
    }

    for (int i = 1; i < argc; i++) {
            if (0 == strncmp(argv[i], "SET", strlen("SET"))) parseSet(argv[i], argName, argValue, argCount);
            else if (0 == strncmp(argv[i], "FUNCTION", strlen("FUNCTION"))) parseFunc(argv[i], &a, &b, &x, &y);
            else {
                errorCode = -1;
                checkError(&errorCode);
            }
    }
    computeFunc(argName, argValue, argCount, &a, &b, &x, &y);
    return 0;
}