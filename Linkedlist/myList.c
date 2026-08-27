#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"myList.h"
#include"statistics.h"

void init(List *list){
    *list = NULL;
}

void display(List list){
    List trav;
    for(trav = list; trav != NULL; trav = trav->link){
        printf("[%d]", trav->data);
        if(trav->link != NULL){
            printf(" -> ");
        }
    }
}

void insertFront(List *list, int item){
    List temp;
    temp = malloc(sizeof(struct node));
    if(temp){
        temp->data = item;
        temp->link = *list;
        *list = temp;
    }
    
    
}
void insertRear(List *list, int item){
    List *trav, temp;
    for(trav = list; *trav != NULL; trav = &(*trav)->link);
    temp = malloc(sizeof(struct node));
    if(temp){
        temp->data = item;
        temp->link = *trav;
        *trav = temp;
    }
    
}

void insertIndex(List *list, int item, int index){
    List *trav, temp;
    for(trav = list; *trav != NULL && index > 1; --index, trav = &(*trav)->link);
    temp = malloc(sizeof(struct node));
    if(temp){
        temp->data = item;
        temp->link = *trav;
        *trav = temp;
    }

}
void insertSorted(List *list, int item){
    List *trav, temp;
    for(trav = list; *trav != NULL && (*trav)->data < item; trav = &(*trav)->link);
    temp = malloc(sizeof(struct node));
    if(temp){
        temp->data = item;
        temp->link = *trav;
        *trav = temp;
    }


}

void deleteFront(List *list){
    List temp;
    if (*list != NULL) {
        temp = *list;
        *list = temp->link;
        free(temp);
    }
}
void deleteRear(List *list){
    List *trav, temp;
    for(trav = list; (*trav)->link->link != NULL; trav = &(*trav)->link);
    temp = *trav;
    if(temp->link != NULL){
        free(temp->link);
        temp->link = NULL;
    }

}

void deleteIndex(List *list, int index){
    List *trav, temp;
    for(trav = list; (*trav)->link->link != NULL && index > 1; --index, trav = &(*trav)->link);
    
    if(*trav != NULL){
        temp = *trav;
        *trav = temp->link;
        free(temp);
        
    }
}

void deleteOccurence(List *list, int item){
    List *trav, temp;
    for(trav = list; (*trav)->link != NULL && (*trav)->data != item; trav = &(*trav)->link);
    
    if(*trav != NULL){
        temp = *trav;
        *trav = temp->link;
        free(temp);
        
    }
    
}
void deleteAllOccurences(List *list, int item){
    List *trav, temp;
    for(trav = list; *trav != NULL; ){
        if((*trav)->data == item){
            temp = *trav;
            *trav = temp->link;
            free(temp);
        } else{
            trav = &(*trav)->link;
        }
    }
}


bool search(List list, int item){
    List trav;
    for(trav = list; trav != NULL; trav = trav->link){
        if(trav->data == item){
            printf("True\n");
            return true;
        }
    }
    printf("False\n");
    return false;
    
}
void searchIndex(List list, int index){
    List trav;
    int count = 0;
    for(trav = list; trav != NULL && index > 1; --index, trav = trav->link);
    
    
    if(trav != NULL){
        printf("Number at Index %d: %d\n", index, trav->data);
    } else{
        printf("None\n");
    }
    
    
    
}

void countAll(List list){
    List trav;
    int count = 0; 
    for(trav = list; trav != NULL; trav = trav->link){
        count++;
    }
    if(count != 0){
        printf("Number of nodes: %d\n", count);
    } else{
        printf("Empty!\n");
    }
}

void countNumber(List list, int item){
    List trav;
    int count = 0; 
    for(trav = list; trav != NULL; trav = trav->link){
        if(trav->data == item){
            count++;
        }
    }
    if(count != 0){
        printf("Number of nodes with value %d: %d\n", item, count);
    } else{
        printf("Empty!\n");
    }
}

void mean(List *list){
    List *trav;
    double count = 0; 
    double sum = 0;
    for(trav = list; *trav != NULL; trav = &(*trav)->link){
        count++;
        sum += (*trav)->data;
    }
    double final = sum / count;
    if(count != 0){
        printf("Mean of list: %.2lf\n", final);
    } else{
        printf("Empty!\n");
    }
    
}

void median(List *list){
    List slow, fast, prev;
    slow = *list;
    fast = *list;
    prev = NULL;
    while(fast != NULL && fast->link != NULL){
        prev = slow;
        slow = slow->link;
        fast = fast->link->link;
    }
    
    if(fast != NULL){
        printf("Median of list: %d\n", slow->data);
    } else{
        double final = (prev->data + slow->data)/ 2.0;
        printf("Median of list: %.2lf\n", final);
    }
    
}

void mode(List *list){
    List inner, outer;
    
    int mode = (*list)->data;
    int max = 0;
    int none = 0;
    for(inner = *list; inner != NULL; inner = inner->link){
        int count = 0;
        for(outer = *list; outer != NULL; outer = outer->link){
            if(inner->data == outer->data){
                count++;
            }
        }
        if(count > max){
            max = count;
            mode = inner->data;
            none = 0;
        }
        if(count == max && inner->data != mode){
            none = 1;
        }
        
    }
    
    if(max > 1 && !none){
        printf("Mode of list: %d\n", mode);
    } else{
        printf("Mode of list: None");
    }
    
}




