// global variable
// local variable

#include <stdio.h>

int height = 40; // global variable
int main(void) {
    int age = 37; // local variable
}

// the local variables are not available after the function ends
// this is because they are declared on  the stack by default
// unless declared on the heap using pointers - but the caveate is that one 
// has to now manage the memory themselves