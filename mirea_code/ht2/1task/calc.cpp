#include <iostream>
#include <math.h>
 
using namespace std;

long double calcS(long double rBig, long double r, long double l) {
    return M_PI * ( (rBig * rBig) + (rBig + r) * l + (r * r) );
}

long double calcV(long double rBig, long double r, long double h) {
    long double answer;

    //answer = M_PI;
    answer = (1.0 / 3.0) * M_PI * h * ( (rBig * rBig) + rBig * r + (r * r) );

    return answer;
}