#include <stdio.h>

int main(void){
const int SIZE = 5;
int prices[SIZE];

int num[5] = {1, 2, 3, 4, 5};

int h[2];

h[0] =1;
h[1] = 2;

int size = sizeof(num) / sizeof(num[0]); 



printf("%ld\n", sizeof(num) );
printf("%ld\n",sizeof(num[0]) );

for (int i = 0; i < size; i ++){
    printf("%d ", num[i]);
}
printf("\n");
}

// something interesting is that the variable name
// is a pointer to the first element of the array