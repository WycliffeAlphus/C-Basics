// One can also define a macro
// the difference is that a macro and symbolic constant is that a macro
// can accept an argument and typically contains a code
// a symbolic constant is a value
#include <stdio.h>

int main(void){
#define POWER(x) ((x)*(x))

printf("%u\n", POWER(4));
}
