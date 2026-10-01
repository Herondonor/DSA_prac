#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define MAX 10

typedef bool Set[MAX];

bool addElement(Set s, int item);
bool removeElement(Set s, int item);
void display(Set s);
void init(Set s);

void setUnion(Set a, Set b, Set result);
bool *setIntersection(Set a, Set b);
bool *difference(Set a, Set b);

int main(){
    Set a, b, result;
    init(a);
    init(b);
    init(result);
    
    addElement(a, 1);
    addElement(a, 4);
    addElement(a, 5);
    addElement(a, 9);
    display(a);
    
    addElement(b, 3);
    addElement(b, 4);
    addElement(b, 7);
    addElement(b, 8);
    display(b);
    
    setUnion(a, b, result);
    printf("\nUnion:\n");
    display(result);
    
    bool* result2 = setIntersection(a, b);
    printf("Intersection:\n");
    display(result2);
    
    bool* result3 = difference(a, b);
    printf("Difference:\n");
    display(result3);

    
}

bool addElement(Set s, int item){
    if(s[item] == 1){
        return false;
    } else{
        s[item] = 1;
        return true;
    }
}
bool removeElement(Set s, int item){
    if(s[item] == 0){
        return false;
    } else{
        s[item] = 0;
        return true;
    }
}
void display(Set s){
    for(int i = 0; i < MAX; i++){
        printf("%d ", s[i]);
    }
    printf("\n");
}
void init(Set s){
    for(int i = 0; i < MAX; i++){
        s[i] = 0;
    }
}

void setUnion(Set a, Set b, Set result){
    for(int i = 0; i < MAX; i++){
         result[i] = a[i] || b[i];
    }
}
bool *setIntersection(Set a, Set b){
    bool* result = malloc(sizeof(bool) * MAX);
    for(int i = 0; i < MAX; i++){
        result[i] = a[i] && b[i];
    }
    return result;
}
    
bool *difference(Set a, Set b){
    bool* result = malloc(sizeof(bool) * MAX);
    for(int i = 0; i < MAX; i++){
        result[i] = a[i] && !b[i];
    }
    return result;
}