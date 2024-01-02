#include <stdio.h>
#include <stdlib.h>
typedef struct node * N;
struct node{
    int data;
    N link;
}*head,*p= NULL,*n = NULL;
int x;
void print(N m){
    N temp;
    temp = m;
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
void insert(int a, N b){
    N temp,new;
    new = (N)malloc(sizeof(struct node));
    new->data = a;
    new->link = NULL;
    temp = b;
    if(temp == NULL){
        b = new;
    } 
    while(temp->link!=NULL){
        temp = temp->link;
    }  
    temp->link = new;
    print(b);
}
void pn(){
    N temp;
    temp = head;
    while(temp->link!=NULL){
        if(temp->data>0){
            insert(temp->data, p);
        } else {
            insert(temp->data, n);
        }
        temp = temp->link;        
    }
    printf("Hi");
}
int main(){
    printf("Enter the number of elements: ");
    scanf("%d",&x);
    create();
    print(head);
    pn();
    print(p);
    print(n);
}