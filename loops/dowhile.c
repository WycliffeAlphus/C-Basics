#include <stdio.h>


int main(void){

int i = 0;

do {
    /*do some work*/
    printf("%u", i);
    i++;
} while (i > 10);

}

// in this what is executed in do is done at least once
// regardless of the condition check in the bottom
