/*
Проектное задание №1
Проверка ошибок
@see main.c
*/
#include <stdio.h>

/*
Функция обработки ошибок
@param int* errorCode - указатель на номер ошибки из главной функции
@global errorCode возвращается в 0 в конце функции
@example printf("Input error");
@uses <stdio.h>
*/
void checkError(int* errorCode){
    switch(*errorCode){
        case -1:
            printf("Input error\n");
            break;
    }
    *errorCode = 0;
}