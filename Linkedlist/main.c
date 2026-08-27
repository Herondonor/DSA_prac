#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"myList.h"
#include"statistics.h"

int main(){
    List list;
    
    init(&list);
    insertFront(&list, 9);
    insertFront(&list, 4);
    insertFront(&list, 1);
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
    printf("\nInsertIndex: 4 Index: 2\n");
    insertIndex(&list, 4, 2);
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
    printf("\nDeleteAllOccurences: 4\n");
    deleteAllOccurences(&list, 4);
    display(list);
    
    
    printf("\nSearch: 7\n");
    search(list, 7);
    printf("\nSearchIndex: 4\n");
    searchIndex(list, 4);
    
    printf("\nCountAll: \n");
    countAll(list);
    printf("\nCountNumber: 7\n");
    countNumber(list, 7);
    
    printf("\nFindMean:\n");
    mean(&list);
    printf("\nFindMedian:\n");
    median(&list);
    printf("\nFindMode:\n");
    mode(&list);
    
    return 0;
    
    
}