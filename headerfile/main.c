#include <stdio.h>
#include "calculate_age.h"


int main(void){
    printf("%u\n", calculateAge(1983));
}

// to compile all use:
// gcc -o main main.c calculate_age.c

//with more complex files one needs to have a Makefile
