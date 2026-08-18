#ifndef MYLIST_H
#define MYLIST_H
#include<stdbool.h>

typedef int Data;

typedef struct{
    Data *elems;
    int count;
    int size;
} List;

void initList(List *list, int size);
List newList(int size);

void display(List list);
bool insertFront(List *list, int item);
bool insertRear(List *list, int item);
bool insertInto(List *list, int index, int item);
bool deleteFront(List *list);
bool deleteRear(List *list);
int deleteAllItem(List *list, int item); //delete all of the item and return the number delete
int deleteItem(List *list, int item);
bool isInList(List list, int key); //find the item in list
int isFoundAt(List list, int key); //returns the first occurence

#endif