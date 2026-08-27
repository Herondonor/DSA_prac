#ifndef VHEAP_H
#define VHEAP_H
#define MAX 10
#define TOP 100000

typedef struct{
    int data;
    int next;
}Stype;

typedef struct{
    Stype elems[MAX];
    int avail;
}VHeap;

typedef int List;

void initVSpace(VHeap *vh);
int allocSpace(VHeap *vh);
void freeSpace(VHeap *vh, int index);
void insertFront(VHeap *vh, List *list, int item);
void insertSorted(VHeap *vh, List *list, int item);
void insertRear(VHeap *vh, List *list, int item);
void insertIndex(VHeap *vh, List *list, int item, int index);
void display(VHeap vh, List list);
void visualize(VHeap vh);


typedef int List;
#endif