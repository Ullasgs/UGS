//program to insert nodes at the end
#include <stdio.h>
#include <stdlib.h>
typedef struct node * N;
struct node{
    int id;
    N link;
} *head;
int x;
void create(); void print(); void delete();

int main(){
    printf("Enter the number of ids: ");
    scanf("%d",&x);
    create();
    print();
    delete();
    print();
    return 0;
}
void print(){
    N temp;
    temp = head;
    printf("the ids in order are: \n");
    while(temp!=NULL){
        printf("%d \n", temp->id);
        temp = temp->link;        
    }
}
void delete(){
    N cur,prev,new;int n;
    printf("Enter the id to be deleted: ");
    scanf("%d", &n);
    prev = NULL;
    cur = head;
    while(cur->id!=n){
        prev = cur; 
        cur = cur->link;
    }
    new = cur->link;
    prev->link = new;
}
void create(){
    N temp,new;
    head = (N)malloc(sizeof(struct node));
    printf("Enter the id 1: ");
    scanf("%d",&head->id);
    head->link=NULL;
    temp = head;
    for(int i=1;i<x;i++){
        new = (N)malloc(sizeof(struct node));
        printf("Enter the id %d: ", i+1);
        scanf("%d", &new->id);
        new->link=NULL;
        temp->link=new;
        temp=temp->link;
    }
    temp->link = NULL;
}