/**
 * Практическое задание 1
 * Файл с обработкой ошибок, подключается внутри файла main.c
 * @see main.c
 * @uses <stdio.h>
 * */
#include <stdio.h>

/**
 * Функция, обрабатывающая ошибки и выводящая сообщения о них на экран.
 * @param double a -- первое введённое число
 * @param int* err -- указатель на номер ошибки из главной функции
 * @global err возвращается в 0 в конце функции.
 * @example handleError(-1); // printf("DIVISION BY ZERO");
 * @uses <stdio.h>
 * */
void checkError(int* errorCode){
    switch(*errorCode){
        case -1:
            printf("Input error\n");
            break;
    }
    *errorCode = 0;
}