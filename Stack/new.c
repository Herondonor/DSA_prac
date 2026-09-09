#include<stdio.h>
#include<stdbool.h>
#include"header.h"

void initStack(StackArray *Arr){
    Arr->top = -1;
    for(int i = MAX_SIZE - 1; i > -1; --i){
        Arr->Stud[i].ID = 676767;
    }
}

bool push(StackArray *Arr){
    if(Arr->top < MAX_SIZE - 1){
        Arr->Stud[++Arr->top] = (Student){25101310, "John", "BSCS", 2026, 'M'};
        return true;
    }
    printf("Student Stack overflow.\n");
    return false;
    
}

bool pop(StackArray *Arr){
    if(Arr->top > -1){
        --Arr->top;
        printf("Popped from Student.\n");
        return true;
    }
    printf("Student Stack Empty.\n");
    return false;
    
}

StackArray struct peek(StackArray Arr){
    return Arr.Stud[Arr.top];
}

void printStudent(StackArray, int i){
    printf("\nStudent %d:", i);
    
    printf("\nID: %d", Arr.Stud[i].ID);
    printf("\nName: %s", Arr.Stud[i].name);
    printf("\nProgram: %s", Arr.Stud[i].program);
    printf("\nYear: %d", Arr.Stud[i].year);
    printf("\nSex: %c\n", Arr.Stud[i].sex);
}


void display(StackArray Arr, Student Stud){
    if(Arr.top == -1){
        printf("Stack Empty!\n");
    } else if(Arr.top >= MAX_SIZE - 1){
        printf("Stack Overflow!\n");
    } else{
        for(int i = Arr.top; i > -1; i--){
            printf("\nStudent %d:", i);
            
            printf("\nID: %d", Arr.Stud[i].ID);
            printf("\nName: %s", Arr.Stud[i].name);
            printf("\nProgram: %s", Arr.Stud[i].program);
            printf("\nYear: %d", Arr.Stud[i].year);
            printf("\nSex: %c\n", Arr.Stud[i].sex);
        }
       
        printf("\n");
    }
}

void visualize(StackArray Arr, Student Stud){
    printf("%10s | %10s\n", "Student", "Data");
    for(int i = MAX_SIZE - 1; i >= -1; --i){
        printf("%10d | ", i);

        if(Arr.Stud[i].ID == 676767){
            printf("%10s | ", "");
        } else{
            printf("ID: %d\n", Arr.Stud[i].ID);
            printf("Name: %s\n", Arr.Stud[i].name);
            printf("Program: %s\n", Arr.Stud[i].program);
            printf("Year: %d\n", Arr.Stud[i].year);
            printf("Sex: %c\n", Arr.Stud[i].sex);
        }
        printf("\n");
    }

} 
