#include <stdio.h>

// inside a function one can make a variable static by using the static
// key word

// by default the global variables are static
// are initialized to zero if no value is assigned

// a static variable retains its value across functions

int incrementAge(){
    int age = 0 ; // No matter the number of calls this is always reinitialized with every
    // function call:  is in the stack
    age++;
    return age;
}

int incrementAge2(){
    static int age; // this is in heap: the value will alwaya be retained
    // across every function call
    age++;
    return age;
}

int incrementAge3(){
    static int ages[3]; // one can also have a static array
    // each item is initialized to 0
    // ages[0]++;
    return ages[0];
}

int main(void){
    printf("%d\n", incrementAge2());
    printf("%d\n", incrementAge2());
    printf("%d\n", incrementAge2());
    printf(">>>>\n");
     printf("%d\n", incrementAge());
    printf("%d\n", incrementAge());
    printf("%d\n", incrementAge());
    printf(">>>>\n");
    printf("%d\n",incrementAge3());
}