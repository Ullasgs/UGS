#include <stdio.h>
#include <stdlib.h>
int a[100];
int front= -1;int rear=-1;int size=5;
typedef struct node * N;
void enqueue(int x){
    if(rear == (size-1)){
        printf("The queue is full");
        return;
    }
    if(front == -1)
    front = 0; 
    rear++;
    a[rear] = x;
}
void dequeue(){
    if(front == -1 || front > rear){
        printf("The queue is empty");
        return;
    }
    printf("The deleted element is %d",a[front]);
    front++;
}
void count(){
    if(front == -1 || front > rear)
        printf("The queue is empty");
    else{
    int z = rear-front+1;
    printf("Number of elements in the queue is %d",z);
    }
}
void peek(){
    if(front == -1 || front > rear){
        printf("The queue is empty");
        return;
    }
    printf("The peek element is %d",a[front]);
}
void display(){
    if(front == -1 || front > rear){
        printf("The queue is empty");
        return;
    }
    for(int i=front;i<=rear;i++)
    printf("%d ",a[i]);
}
int main(){
    int n,x;
    printf("Enter your choice for the queue: : ");
    printf("\n1. Insert an element: ");
    printf("\n2. Delete the element: ");
    printf("\n3. Display: ");
    printf("\n4. Peek: ");
    printf("\n5. Count(of elements): ");
    printf("\n6. Exit: ");
    while(1){
        printf("\nEnter your choice: ");
        scanf("%d",&n);
        switch(n){
            case 1: 
            printf("Enter the element to be inserted: ");
            scanf("%d",&x);
            enqueue(x);
            break;
            case 2:dequeue();
            break;
            case 3:display();
            break;
            case 4:peek();
            break;
            case 5:count();
            break;
            case 6: exit(0);
            break;
        }

    }
}