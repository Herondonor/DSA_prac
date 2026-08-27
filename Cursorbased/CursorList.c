#include<stdio.h>
#include<stdbool.h>
#include"VHeap.h"

int main(){
    VHeap VH;
    List list = -1;
    initVSpace(&VH);
    
    insertFront(&VH, &list, 30);
    visualize(VH);
    display(VH, list);
    
    insertSorted(&VH, &list, 10);
    visualize(VH);
    display(VH, list);
    
    insertRear(&VH, &list, 20);
    visualize(VH);
    display(VH, list);

    insertIndex(&VH, &list, 40, 1);
    visualize(VH);
    display(VH, list);
 
}


