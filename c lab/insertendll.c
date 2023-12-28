//program to insert nodes at the end
#include <stdio.h>
#include <stdlib.h>
typedef struct node * N;
struct node{
    int id;
    N link;
} *head;
int x;
void create(); void print(); void insert();

int main(){
    printf("Enter the number of ids: ");
    scanf("%d",&x);
    create();
    print();
    insert();
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
void insert(){
    N new, temp;int n;
    new = (N)malloc(sizeof(struct node));
    printf("Enter the new id : ");
    scanf("%d", &new->id);
    new->link = NULL;
    temp = head;
    while(temp->link!=NULL){
        temp=temp->link;
    }
    temp->link = new;
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