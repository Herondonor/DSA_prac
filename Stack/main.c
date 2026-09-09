#include<stdio.h>
#include<stdbool.h>
#include"header.h"
#define MAX_SIZE 20

int main(){
    StackArray Arr;
    Student S;
    initStack(&Arr);
    int n = 0;
    char op;
   
    printf("a - push\nb - pop\nc - peek\nd - display\ne - visualize\n\n");
   
    do{
        printf("Enter option: ");
        scanf(" %c", &op);
        if(op == 'a'){
            push(&Arr);
        }
        else if(op == 'b'){
            pop(&Arr);
        }
        else if(op == 'c'){
            printStudent(Arr, peek(Arr));
        }
        else if(op == 'd'){
            display(Arr, S);
        }
        else if(op == 'e'){
            visualize(Arr, S);
        }
       
    }
    while(Arr.top != -2);
}