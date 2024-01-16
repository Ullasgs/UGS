/*A Singly linked list containing integer values is given. 
Using this list, write a function to create two new singly linked lists, 
one containing only even numbers and the other containing only odd numbers.*/
#include <stdio.h>
#include <stdlib.h>
typedef struct node * N;
struct node{
    int data;
    N link;
} *head,*l1,*l2;

void oe(){
    N temp, new;
    temp = head;
    while(temp!=NULL){
        if(temp->data%2==0){
            l1 = (N)malloc(sizeof(struct node));
            l1->data = temp->data;
        }
        temp=temp->link;
        
    }
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
    N temp,new; int n;
    head = (N)malloc(sizeof(struct node));
    printf("Enter the unmber of nodes");
    scanf("%d", &n;)
    printf("Enter the node 1: ");
    scanf("%d",&head->data);
    head->link=NULL;
    temp = head;
    for(int i=1;i<n;i++){
        new = (N)malloc(sizeof(struct node));
        printf("Enter the node %d: ", i+1);
        scanf("%d", &new->data);
        new->link=NULL;
        temp->link=new;
        temp=temp->link;
    }
    temp->link = NULL;
}
int main(){
    create();
    print();
    oe();
    print();
}