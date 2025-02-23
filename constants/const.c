#include <stdio.h>


int main(void){
    const int AGE =  37 ;
    #define H 3 // Note that the semicolon and equal sign are not needed.
    printf("%u\n", AGE);
    printf("%u\n",H);
}

// It is common to declare constants with uppercase
// A constant can also be used this way - #define AGE 37



