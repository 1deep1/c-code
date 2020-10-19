#include <iostream>
#include <math.h>
 
using namespace std;

long double calcS(long double rBig, long double r, long double l) {
    return M_PI * ( (rBig * rBig) + (rBig + r) * l + (r * r) );
}

long double calcV(long double rBig, long double r, long double h) {
    return ( (1/3) * M_PI * h ) * ( (rBig * rBig) + ( rBig * r ) + (r * r) );
}