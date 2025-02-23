#include <stdio.h>

int main(void){
int prices[3] = {5, 4, 3};
printf("%u\n", *prices); // this gives the value of the first interger in the array
// if not dereferenced it will give the address

//to find the next involves adding 1 to the address
// then dereferencing

printf("%u\n", *(prices+1)); 
}

// prices variable is a pointer to the first item of the array
