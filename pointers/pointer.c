#include <stdio.h>


int main(void){
int age;
int *address = &age;
*address = 37;
printf("%p\n", address);
printf("%u\n", *address);
}