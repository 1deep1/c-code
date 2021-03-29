#include <iostream>
 
using namespace std;

long double sum (long double num1, long double num2, int *error){
    return num1 + num2;
}

long double sub (long double num1, long double num2, int *error){
    return num1 - num2;
}

long double multi (long double num1, long double num2, int *error){
    return num1 * num2;
}

long double div (long double num1, long double num2, int *error){
    if (0==num2) {
        *error = -1;
        return 0;
    }
    return num1 / num2;
}