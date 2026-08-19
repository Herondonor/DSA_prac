#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"myList.h"

void init(List *list, int size){
    list->size = size;
    list->elems = malloc(sizeof(list) * size);    
    list->count = 0;
}

bool insertFront(List *list, int item){
    if(list->count < list->size){
        for(int i = list->count; i > 0; --i){
            list->elems[i] = list->elems[i - 1];
        }
        list->elems[0] = item;
        list->count++;
        return true;
    }
    return false;
}
bool insertRear(List *list, int item){
    if(list->count < list->size){
        list->elems[list->count] = item;
        list->count++;
        return true;
    }
    return false;
}
bool insertIndex(List *list, int item, int index){
    int n = 0;
    if(index < list->size){
        for(int i = list->count; i > index - 1; --i){
            list->elems[i] = list->elems[i - 1];
            n = i;
        }
        list->elems[n] = item;
        list->count++;
        return true;
    }
    return false;

}
bool insertSorted(List *list, int item){
    int n = 0;
    if(list->count < list->size){
        /*
        list->size *= 2;
        list->elems = realloc(list->elems, sizeof(list) * list->size);
        */
        for(int i = list->count; i > 0; --i){
            if(list->elems[i - 1] > item){
                list->elems[i] = list->elems[i - 1];
            } else{
                n = i;
                break;
            }
        }
        list->elems[n] = item;
        list->count++;
        return true;
    }

}

bool deleteFront(List *list){
    if(list->count > 0){
        for(int i = 0; i < list->count; ++i){
            list->elems[i] = list->elems[i + 1];
        }
        list->count--;
        return true;
    }
    return false;
}
bool deleteRear(List *list){
    if(list->count > 0){
        list->elems[list->count] = 0;
        list->count--;
        return true;
    }
    return false;

}
bool deleteIndex(List *list, int index){
    int n = 0;
    if(index < list->size){
        for(int i = index; i < list->count; ++i){
            list->elems[i] = list->elems[i + 1];
        }
        list->count--;
        return true;
    }
    return false;
}
bool deleteOccurence(List *list, int item){
    int n = 0;
    if(list->count > 0){
        for(int i = 0; i < list->count; ++i){
            if(list->elems[i] != item){
                continue;
            } else{
                n = i;
                break;
            }
            
        }
        for(int i = n; i < list->count; ++i){
            list->elems[i] = list->elems[i + 1];
        }
        list->count--;
        return true;
    }
    return false;
    
}
bool deleteAllOccurences(List *list, int item){
    if(list->count > 0){
        for(int i = 0; i < list->count; ++i){
            if(list->elems[i] != item){
                deleteOccurence(list, item);
            }
        }
        return true;
    }
    return false;
}


bool search(List list, int item){
    for(int i = 0; i < list.count; ++i){
        if(list.elems[i] == item){
            printf("True\n");
            return true;
        }
    }
    printf("False\n");
    return false;
    
}
bool searchIndex(List list, int index){
    if(index < list.count){
        printf("Num at index %d: %d\n", index, list.elems[index]);
        return true;
    }
    return false;
    
}

void countAll(List list){
    printf("Numbers counted: %d\n", list.count);
}

void countNumber(List list, int item){
    int num = 0;
    for(int i = 0; i <= list.count; ++i){
        if(list.elems[i] == item){
            num++;
        }
    }
    printf("Number of Occurences: %d\n", num);
}


void display(List list){
    printf("{");
    for(int i = 0; i < list.count; ++i){
        printf("%d", list.elems[i]);
        if(i < list.count - 1){
            printf(", ");
        }
    }
    printf("}\n");
}