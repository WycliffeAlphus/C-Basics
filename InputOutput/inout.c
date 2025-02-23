// There are 3 I/O streams:
// stdin (standard input)
// stdout (standard output)
// stderr (standard error)

// in c there is no difference between reading fron a  file
// or reading from the command line

// printf() is mostly used to print characters to stdout

// and the fprintf(), helps specify where to take the output

#include <stdio.h>

void main (void){
char name[20];

printf("Enter your name: ");
scanf("%s", name);
printf("Welcome %s\n", name);
}


// scanf is used as an input function
// used to get values from the command line
// a variable to hold the value has to be defined

// it is then called with the format type and the address of the variable

// string name is a pointer to the firs character thus an address is not needed
// to be passed
