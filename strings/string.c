// string is an array of char

#include <stdio.h> 
#include <string.h>


int main(void){
    char name[6] = {'C', 'L', 'I', 'F', 'F'};
    char names[6] = "cliff";


    printf("%s\n", name);
    printf("%ld\n", strlen(name));
}

// In the above example, the extra length size is included fot the string terminator, 0.
// A space has to provide, if not included unexpected behavior can occur
// For example the above will print CLIFF and cliff even though
// only name was printed: that happens when they are given a size of 5

// the string.h library can help in manipulation of strings