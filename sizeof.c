// sizeof returns the size of the passed operand
// one can pass a value of a type

    #include <stdio.h>

    int main(void) {
        int age = 37;
        printf("%ld\n", sizeof(age));
        printf("%ld\n", sizeof(int));
    }