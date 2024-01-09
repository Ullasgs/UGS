#include <stdio.h>
#include <stdlib.h>
int stack[20];
int MAX = 5;
int top = -1;
void push(int a){
    if(top==MAX-1){
        printf("The stack is full");
    } else { 
            top++;
            stack[top]=a;
    }
}

void pop(){
    if(top==-1){
        printf("Stack is empty");
    } else {
        top--;
    }
}
void peek(){
    if(top==-1)
        printf("Stack is empty");
    printf("%d", stack[top]);
}
void peep(int n){
    printf("%d", stack[n-1]);
}
void display(){
    if(top==-1)
        printf("Stack is empty");
    for(int i = top;i>0;i--){
        printf("%d ", stack[i]);
    }
}
int main(){
    int a,b,c;
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
