// The float types include:
// float, double, and the long double
// floats are represented using 32 bit (10^-37 to 10^+37)
#include <stdio.h> 

int main(void) {

printf("char size: %lu bytes\n", sizeof(char));
printf("int size: %lu bytes\n", sizeof(int));
printf("short size: %lu bytes\n", sizeof(short));
printf("long size: %lu bytes\n", sizeof(long));
printf("float size: %lu bytes\n", sizeof(float));
printf("double size: %lu bytes\n", 
sizeof(double));
printf("long double size: %lu bytes\n", 
sizeof(long double));
}
