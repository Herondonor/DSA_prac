#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"myList.h"

int main(){
    List list;
    
    init(&list, 10);
    insertFront(&list, 5);
    insertFront(&list, 7);
    insertFront(&list, 3);
    insertFront(&list, 5);
    insertFront(&list, 7);
    display(list);
    insertRear(&list, 6);
    display(list);
    insertSorted(&list, 2);
    display(list);
    insertIndex(&list, 4, 2);
    display(list);
    
    
    deleteFront(&list);
    display(list);
    deleteRear(&list);
    display(list);
    deleteIndex(&list, 3);
    display(list);
    deleteOccurence(&list, 7);
    display(list);
    deleteAllOccurences(&list, 5);
    display(list);
    /*
    search(list);
    searchIndex(list);
    
    count(list)
    */
}