#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include"mylist.h"

int main(){
    List myList = newList(5);

    printf("\033[H\033[J");

    display(myList);

    insertRear(&myList, 10);
    display(myList);

    insertRear(&myList, 5);
    display(myList);

    insertRear(&myList, 1);
    display(myList);
}