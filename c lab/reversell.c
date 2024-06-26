//program to reverse a linked list
#include <stdio.h>
#include <stdlib.h>
typedef struct node * N;
struct node{
    int data;
    N link;
} *head;
int x;
void reverse(){
    N prev, cur, next;
    prev = NULL;
    cur = next = head;
    while(next!=NULL){
        next = next->link;
        cur->link = prev;
        prev=cur;
        cur = next;
    }
    head = prev;
}
void print(){
    N temp;
    temp = head;
    printf("the numbers are: \n");
    while(temp!=NULL){
        printf("%d \n", temp->data);
        temp = temp->link;        
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
    reverse();
    print();
    return 0;
}