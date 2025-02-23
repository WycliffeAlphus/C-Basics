#include <stdio.h>

int main(void) {
    int a = 2;
    int b;
    b = a++; // a is increased after being assigned to b
    printf("%u\n%u\n", a, b); // a = 3 and b = 2
    b = ++a; // a is increased before being used
    printf("%u\n%u\n", a, b); // a = 4 and b = 4
}