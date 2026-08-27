#ifndef MYLIST_H
#define MYLIST_H
#include<stdbool.h>

//create new header lib called statistics.h(mode, median, mean)
typedef struct node{
    int data;
    int count;
    struct node* link;
}*List;

void init(List *list);
void display(List list);

void insertFront(List *list, int item);
void insertRear(List *list, int item);
void insertIndex(List *list, int item, int index);
void insertSorted(List *list, int item);

void deleteFront(List *list);
void deleteRear(List *list);
void deleteIndex(List *list, int index);
void deleteOccurence(List *list, int item);
void deleteAllOccurences(List *list, int item);

bool search(List list, int item);
void searchIndex(List list, int index);

void countAll(List list);
void countNumber(List list, int item);


//all insert(front, rear), delete(front, rear, all occurences of item), search -> true/false and index, count no of occurences,  


#endif