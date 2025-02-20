#include <stdio.h>

int main(void){
    char j = 127;
    j = j + 10;
    printf("%u\n", j); // results in a large number: 4294967177
}

// It is easy to go over the limits of a type; C does not prevent it