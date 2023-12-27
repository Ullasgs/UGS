#include <stdio.h>
#include <stdlib.h>
typedef struct node * N;
struct node{
    int data;
    N link;
}*head;
void create(){
    N temp,new;
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    head = (N)malloc(sizeof(struct node));
    printf("\nEnter the first number: ");
    scanf("%d", &head->data);
    temp = head;
    for(int i=1;i<n;i++){
        printf("Enter the number at index %d: ", i+1);
        new = (N)malloc(sizeof(struct node));
        scanf("%d", &new->data);
        new->link = NULL;
        temp->link = new;
        temp = temp->link;
    }

}
void print(){
    N temp;
    temp = head;
    printf("The numbers are: ");
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp = temp->link;
    }

}
int main(){
    create();
    print();
}