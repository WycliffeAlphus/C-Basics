#include <stdio.h>


int main(void){
    int a = 1;
    if (a==2){
        printf("%s\n", "yes");
    } else {
        printf("%s\n", "no");
    }
}

// never use =  when checking conditional for it will always be true
// Unless it is 0 ; 

// for example

/*
int a = 0;

if (a = 0){
will never be invode because when 0 resolves to 
bool it becomes false always
All others including -1 resolves to true
}

*/