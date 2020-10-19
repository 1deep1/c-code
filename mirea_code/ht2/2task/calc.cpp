#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

long double calcW(int x, int a) {
    if (abs(x) < 1) {
        return a * log10(abs(x));
    }
    else if (abs(x) >= 1) {
        return sqrt(a - (x * x));
    }
    else {
        return 0;
    }
}