#include <stdio.h>

int main(void){
    char j;
    j += 1000;
    printf("%d\n",j);
}

// The above will not complain but it will lead to an overflow
// It will lead to -24

