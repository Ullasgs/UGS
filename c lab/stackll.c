#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node * link;
}*head,*top;
typedef struct node * N;

void push(int a){
    N new,temp;
    new = (N)malloc(sizeof(struct node));
    scanf("%d", &a);new->data=a;
    new->link = NULL;
    if(head==NULL)
    head = new;
    else{
    new->link = head;
    temp = head;
    new->link = temp;
    head = new;
    top = head->link;
    }
}
void pop(){
    if(head==NULL)
    printf("Stack is empty.");
    top = top->link; head = top;
}
void peek(){
    if(head==NULL)
    printf("Stack is empty.");
    printf("%d", head->data);
}
void peep(int n){
    N temp;
    temp = head;
    while(temp!=NULL){
        temp = temp->link;
        if(n==temp){
        printf("%d", temp->data);
        break;
    }
    }
}

void display(){
    N temp;
    temp = top;
    while(temp!=NULL){
        printf("%d",temp->data);
        temp = temp->link;
    }
}
int main(){
    int a,b,c;
    head = (N)malloc(sizeof(struct node));
    printf("Enter your choice among the following: \n1.push()\n2.pop()\n3.peek()\n4.peep()\n5.display()\n");
    while(1){
    printf("Enter choice: ");
    scanf("%d", &a);
    switch(a){
        case 1:
        printf("Enter the value of n in push(n) ");
        scanf("%d",&b);
        push(b);
        break;
        case 2: 
        printf("popping the element in %d", top+1);
        pop();
        break;
        case 3:
        peek();
        break;
        case 4:
        printf("Enter the value of n in peep(n) ");
        scanf("%d",&c);
        peep(c);
        break;
        case 5:
        display();
        break;
    }
    }

}
