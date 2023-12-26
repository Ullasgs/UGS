#include <stdio.h>
#include <stdlib.h>
typedef struct node * N;
struct node{
    int id;
    N link;
} *head;
int x;
void create(){
    N temp,new;
    int n;
    head = (N)malloc(sizeof(struct node));
    printf("Enter the id 1: ");
    scanf("%d",&n);
    head->id=n;
    head->link=NULL;
    temp = head;
    for(int i=1;i<x;i++){
        new = (N)malloc(sizeof(struct node));
        printf("Enter the id %d: ", i+1);
        scanf("%d", &n);
        new->id=n;
        new->link=NULL;
        temp->link=new;
        temp=temp->link;
    }
    temp->link = NULL;
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
int main(){
    printf("Enter the number of ids: ");
    scanf("%d",&x);
    create();
    print();
    return 0;  
}