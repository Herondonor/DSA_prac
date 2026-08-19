#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"myList.h"

int main(){
    List list;
    
    init(&list, 10);
    insertFront(&list, 4);
    insertFront(&list, 5);
    insertFront(&list, 7);
    insertFront(&list, 3);
    insertFront(&list, 5);
    display(list);
    printf("\nInsertFront: 7\n");
    insertFront(&list, 7);
    display(list);
    printf("\nInsertRear: 6\n");
    insertRear(&list, 6);
    display(list);
    printf("\nInsertSorted: 2\n");
    insertSorted(&list, 2);
    display(list);
    printf("\nInsertIndex: 7 Index: 2\n");
    insertIndex(&list, 7, 2);
    display(list);
    
    printf("\nDeleteFront:\n");
    deleteFront(&list);
    display(list);
    printf("\nDeleteRear:\n");
    deleteRear(&list);
    display(list);
    printf("\nDeleteIndex: 3\n");
    deleteIndex(&list, 3);
    display(list);
    printf("\nDeleteOccurence: 7\n");
    deleteOccurence(&list, 7);
    display(list);
    printf("\nDeleteAllOccurences: 5\n");
    deleteAllOccurences(&list, 5);
    display(list);
    
    
    printf("\nSearch: 4\n");
    search(list, 4);
    printf("\nSearchIndex: 1\n");
    searchIndex(list, 1);
    
    printf("\nCountAll: \n");
    countAll(list);
    printf("\nCountNumber: 7\n");
    countNumber(list, 7);
    
    return 0;
    
}