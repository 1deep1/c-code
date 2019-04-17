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

/*
Основная программа
@uses <stdio.h>, <string.h>, errorChecker.c, calcFunctions.h
*/
int main(int argc, char *argv[]) {
    int errorCode = 0;

    if (argc < 2) {
        errorCode = -1;
        checkError(&errorCode);
        return 0;
    }

    for (int i = 1; i < argc; i++) {
            if (0 == strncmp(argv[i], "SET", strlen("SET"))) parseSet(argv[i]);
            else if (0 == strncmp(argv[i], "FUNCTION", strlen("FUNCTION"))) parseFunc(argv[i]);
            else {
                errorCode = -1;
                checkError(&errorCode);
            }
            computeFunc();
    }
    return 0;
}