// typedef and enum keyword can help define
// a type with one value or another

/*
typedef enum {
    // ..values
} TYPENAME;

*/

#include <stdio.h>

typedef enum {
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday,
    sunday
} WEEKDAY;


int main(void) {
    WEEKDAY day = monday;

    if (day == monday) {
        printf("It's monday!");
    } else {
        printf("It's not monday");
    }
}

