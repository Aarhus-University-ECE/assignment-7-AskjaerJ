extern "C"{
    #include "stack.h"
    #include "taylor_sine.h"
}

// Add your test cases for Exercise 1b,c) here
#include <math.h>
int main(int argc, char **argv) {
    for(double i = 0; i < 3.1415; i += 0.6){
    /* Tests taylor_sine expression using pi starting at 0 increasing by 0.6 increments, at accuracy 10*/
        printf("%f; %f \n", taylor_sine(i,10), sin(i)); 
        
    }
    for(double i = 0; i < 30; i += 5){
    /* Tests taylor_sine expression using 30 starting at 0 increasing by 5 increments,
       at accuracy 10 and 30 to see the difference in accuracy*/
        printf("%f; %f   ", taylor_sine(i,10), sin(i));
        printf("%f; %f \n", taylor_sine(i,30), sin(i));
    }
    return 0;
}