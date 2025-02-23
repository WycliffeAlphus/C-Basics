#include <stdio.h>


int add(int value1, int value2) {
    return (value1+value2);
}

int main(void){
    // int val = add(3, 4);
    printf("%d\n", add(3, 4));
} //entry point for a c function

void doSomething(int value){ // the void keyword show that there is no return value
    printf("%u", value);
}



// one cannot return more than one value from a function

// the parameters are passed by copy
// when value is passed the original cannot change

// one has to declare a function before using it
// it can be moved up or add the function prototype in a header file
