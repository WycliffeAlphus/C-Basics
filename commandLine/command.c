#include <stdio.h>

// to accept commandline commands
int main (int argc, char *argv[]){
    for (int i = 1; i<argc;i++){
        printf("%s\n", argv[i]);
    }
}