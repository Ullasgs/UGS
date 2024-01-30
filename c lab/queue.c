#include <stdio.h>
#include <stdlib.h>
int front = -1;
int rear = -1;
int size = 5;
int a[100];
void enqueue(int x){
    if(rear == (size-1)){
        printf("The queue is full");
        return;
    }
    if(front == -1)
    front = 0;
    else{
    rear++;
    a[rear] = x;
    }
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
    printf("%d",a[i]);
}
int main(){
    int n,x;
    printf("Enter your choice for the queue: \n");
    printf("1. Insert an element\n");
    printf("2. Delete the element\n");
    printf("3. Display\n");
    printf("4. Peek\n");
    printf("5. Count(of elements)\n");
    printf("6. Exit\n");
    scanf("%d",&n);
    while(n!=7){
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