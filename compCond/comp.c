// Conditionals can help us change how a program will be compiled

#include <stdio.h>

const int DEBUG = 0; //checking is debug constant is zero

int main(void) {
#if DEBUG == 0
    printf("I am not debugging\n");
#else 
    printf("I am debugging\n") ;
#endif       
}