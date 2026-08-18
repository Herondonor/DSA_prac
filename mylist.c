#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"mylist.h"

void initList(List *list, int size){
    list->size = size;
    list->elems = malloc(sizeof(Data) * list->size);
    list->count = 0; 
}

List newList(int size){
    List list;

    list.size = size;
    list.elems = malloc(sizeof(Data) * list.size);
    list.count = 0; 

    return list;
}

void display(List list){
    if(list.count == 0){
        printf("List is Empty\n");
        return;
    }

    printf("{");
    for(int i = 0; i < list.count; ++i){
        printf("%d", list.elems[i]);
        if(i < list.count - 1){
            printf(", ");
        } else {
            printf(".");
        }
    }
    printf("}\n");
}

bool insertRear(List *list, int item){
    if(list->size > list->count){
        list->elems[(list->count)++] = item;
        return true;
    }
    return false;
}