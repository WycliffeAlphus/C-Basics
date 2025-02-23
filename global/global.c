#include <stdio.h>


char i = 0; // this is freed when the program ends
// any function can access it

int main(void){
    i += 10;
    printf("%u", i);
}

// a local variable's memory is freed once the function ends
