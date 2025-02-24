// one can check is a symbolic constant or macro is defined

// use #ifdef

#include <stdio.h>

#define VALUE 1

int main(void) {
#ifdef VALUE
    printf("Value is defined\n");
#else
    printf("Value is not defined\n");
#endif        
}


// if defined also works

// to check macros not defined use:
// #ifndef or #if !defined

/*

#define DEBUG 0

#if DEBUG
   // code only sent to compiler 
   // if DEBUG is not 0
#endif

*/