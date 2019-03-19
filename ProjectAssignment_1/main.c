/*
Проектное задание №1

@author Eg0r.Grachev
@link https://github.com/tRexSTYT/c-code
@link http://moria.1586.su/moodle/mod/page/view.php?id=1709
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "errorChecker.c"

/*
@return Возвращает код ошибки в систему;
@throws | *error;
*/
int main(int argc, char *argv[]) {
    int errorCode = 0;

    if (argc < 2) {
        errorCode = -1;
        checkError(&errorCode);
        return 0;
    }
    switch (argv[1][0]) {
        case 'F':
            break;
        case 'S':
            break;
        default:
            errorCode = -1;
            break;
    }
    checkError(&errorCode);
    return 0;
}