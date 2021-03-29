/*
Проектное задание №1
Проверка ошибок
@see main.c
*/
#include <stdio.h>
#include <stdlib.h>

/*
Функция обработки ошибок
@param int *errorCode - указатель на номер ошибки из главной функции
@example printf("Input error");
@uses <stdio.h>
*/
void checkError(int *errorCode){
    switch(*errorCode){
        case -1:
            printf("Input error\n");
            break;
        case -2:
            printf("CANNOT SET CONSTANT\n");
            break;
        case -3:
            printf("HAVE NO FUNCTION AT ALL\n");
            break;
    }
    exit(*errorCode);
}