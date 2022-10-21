#include "taylor_sine.h"
#include <math.h>

/* Function computes the factorial */
double fact(int n) {
    double fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i; /* Computes the factorial until smaller than or equal to input n*/
    }
    return fact; /* Returns result */
}

/* Function computes the taylor series */
double taylor_sine(double x, int n) {     
    int count = 1;
    double sine = 0;
    for(int i = 0; i <= n; i++){
        if(i % 2 == 0){ /* Uses modulus to implement subtract and addition because the result of mod 2 is 1 or 0. */
            sine += pow(x,count)/fact(count); /* Adds sine to x to the power of count divided by the factorial to our count. */
        }
        else
            sine -= pow(x,count)/fact(count); /* Subtracts sine to x to the power of count divided by the factorial to our count. */
        count += 2;
    }
    return sine; /* Return the result of sine computation */
}
