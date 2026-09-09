#ifndef STACK_H
#define STACK_H
#define MAX_SIZE 20
#include<stdbool.h>

typedef struct{
    int ID;
    char name[MAX_SIZE];
    char program[MAX_SIZE];
    int year;
    char sex;
} Student;

typedef struct{
    Student Stud[MAX_SIZE];
    int top;
}StackArray;

void initStack(StackArray *Arr);
bool push(StackArray *Arr);
bool pop(StackArray *Arr);
void display(StackArray Arr, Student Stud);
StackArray struct peek(StackArray Arr);
void visualize(StackArray Arr, Student Stud);

#endif