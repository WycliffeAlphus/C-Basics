#include <stdio.h>

int main(void){

struct person {
    int age;
    char *name;
}cliff, people[20];  // declaring of variables with the structure

//Below  is also valid

struct person{
    int age;
    char *name;
};

struct person cliff;

struct person juliet = {37, "Cliff"};

printf("%s, age %u", juliet.name, juliet.age);

juliet.age = 38;

}
//one can pass them around as function parameters or 
// return values


//structures are passed by copy unless
// a pointer is passed to a struct ; leading to passing by reference

//typedef can help simplify working with structs


typedef struct {
    int age;
    char *name
} PERSON;

PERSON cliff;

PERSON cliff = {37, "Cliff"};
