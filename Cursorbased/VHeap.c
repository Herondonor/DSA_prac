#include<stdio.h>
#include"VHeap.h"


void initVSpace(VHeap *vh){
    
    for(int i = MAX - 1; i >= 0; --i){
        vh->elems[i].next = i - 1;
        vh->elems[i].data = BLANK;
        
    }
    vh->avail = MAX - 1;

    
}

int allocSpace(VHeap *vh){
    int retVal = vh->avail;
    
    if(retVal != -1){
        vh->avail = vh->elems[vh->avail].next;
    } 
    return retVal;
}

void freeSpace(VHeap *vh, int index){
    if(index != -1 && index < MAX){
        vh->elems[index].next = vh->avail;
        vh->avail = index;
    }
    

}

void insertFront(VHeap *vh, List *list, int item){
    List temp = allocSpace(vh);
    
    vh->elems[temp].data = item;
    vh->elems[temp].next = *list;
    *list = temp;
}

void insertSorted(VHeap *vh, List *list, int item){
    List *trav, temp = allocSpace(vh);
    
    for(trav = list; *trav != -1 && vh->elems[*trav].data < item; trav = &vh->elems[*trav].next);
    vh->elems[temp].data = item;
    vh->elems[temp].next = *trav;
    *trav = temp;
}

void insertRear(VHeap *vh, List *list, int item){
    List *trav, temp = allocSpace(vh);
    
    for(trav = list; *trav != -1; trav = &vh->elems[*trav].next);
    vh->elems[temp].data = item;
    vh->elems[temp].next = *trav;
    *trav = temp;
}

void insertIndex(VHeap *vh, List *list, int item, int index){
    List *trav, temp = allocSpace(vh);
    int i = 0;
    for(trav = list; *trav != -1 && i < index; trav = &vh->elems[*trav].next, ++i);
    
    vh->elems[temp].data = item;
    vh->elems[temp].next = *trav;
    *trav = temp;
}

void display(VHeap vh, List list){
    printf("{");
    while(list != -1){
        printf("%5d", vh.elems[list].data);
        list = vh.elems[list].next;
    } printf("}\n\n");
}

void visualize(VHeap vh){
    printf("%10s | %10s | %10s\n", "index", "data", "next");
    for(int i = 0; i < MAX; ++i){
        printf("%10d | ", i);

        if(vh.elems[i].data == BLANK){
            printf("%10s | ", "");
        } else{
            printf("%10d | ", vh.elems[i].data);
        }

        printf("%10d\n", vh.elems[i].next);
    }
    printf("\nAvail: %d\n", vh.avail);
}
