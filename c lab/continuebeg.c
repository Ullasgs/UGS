//create a list by continuously adding nodes to the beginning
#include <stdio.h>
#include <stdlib.h>
typedef struct node *N;
struct node{
    int data;
    N link;
}*head;
void crbeg(){
    int n; N temp, new;
    head = (N)malloc(sizeof(struct node));
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    printf("Enter node 1: ");
    scanf("%d", &head->data);
    head->link = NULL;
    temp = head;
    for(int i=1;i<n;i++){
        new = (N)malloc(sizeof(struct node));
        printf("Enter node %d: ", i+1);
        scanf("%d", &new->data);
        new->link = temp;
        temp = new;
    } head = temp;
}
void print(){
    N temp;
    temp = head;
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp = temp->link;
    }
}
int main(){
    crbeg();
    print();
}