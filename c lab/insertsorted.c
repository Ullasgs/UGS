#include <stdio.h>
#include <stdlib.h>
typedef struct node * N;
struct node{
    int data;
    N link;
} *head;
int x;
void print(){
    N temp;
    temp = head;
    printf("the numbers are: \n");
    while(temp!=NULL){
        printf("%d \n", temp->data);
        temp = temp->link;        
    }
}
void insert(){
    N new, temp;int n;
    new = (N)malloc(sizeof(struct node));
    printf("Enter the number to be added : ");
    scanf("%d", &n);
    new->data = n;

    if(n<head->data || head==NULL){
        new->link = head;
        head = new;
    }else{
    temp = head;
    while(temp->link!=NULL && temp->link->data<n){
        temp= temp->link;
    }
    new->link = temp->link;
    temp->link = new;
    }
}
void create(){
    N temp,new;
    head = (N)malloc(sizeof(struct node));
    printf("Enter the first number: ");
    scanf("%d",&head->data);
    head->link=NULL;
    temp = head;
    for(int i=1;i<x;i++){
        new = (N)malloc(sizeof(struct node));
        printf("Enter number %d: ", i+1);
        scanf("%d", &new->data);
        new->link=NULL;
        temp->link=new;
        temp=temp->link;
    }
    temp->link = NULL;
}

int main(){
    printf("Enter the size of the list: ");
    scanf("%d",&x);
    create();
    print();
    insert();
    print();
    return 0;
}