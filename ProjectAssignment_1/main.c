/*
Проектное задание №1

@author Eg0r.Grachev
@link https://github.com/tRexSTYT/c-code
@link http://moria.1586.su/moodle/mod/page/view.php?id=1709
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
@return Возвращает код ошибки в систему;
@throws | *error;
@uses <stdio.h>, <string.h>, <stdlib.h>;
*/
int main(int argc, char *argv[]) {
    if(argc!=2) {
        printf("Вы забыли ввести свое имя.\n");
        exit(1);
    }
    printf("Привет и соси %s\n", argv[1]);
    return 0;
}
