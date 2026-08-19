#ifndef MYLIST_H
#define MYLIST_H
#include<stdbool.h>
//create new header lib called statistics.h(mode, median, mean)
typedef struct{
    int *elems;
    int count;
    int size;
}List;

void init(List *list, int size);
void display(List list);

bool insertFront(List *list, int item);
bool insertRear(List *list, int item);
bool insertIndex(List *list, int item, int index);
bool insertSorted(List *list, int item);

bool deleteFront(List *list);
bool deleteRear(List *list);
bool deleteIndex(List *list, int index);
bool deleteOccurence(List *list, int item);
bool deleteAllOccurences(List *list, int item);

bool search(List list, int item);
bool searchIndex(List list, int index);

void countAll(List list);
void countNumber(List list, int item);


//all insert(front, rear), delete(front, rear, all occurences of item), search -> true/false and index, count no of occurences,  


#endif