#include <stdio.h>
#include <stdlib.h>
typedef struct node * N;
struct node{
    int id;
    N link;
};
int x;
struct node * create(N h){
    N temp,new;
    int n;
    printf("Enter the id 1: ");
    scanf("%d",&n);
    h->id=n;
    h->link=NULL;
    temp = h;
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
    return h;
}
void print(N l){
    N temp;
    temp = l;
    printf("the ids in order are: \n");
    while(temp!=NULL){
        printf("%d \n", temp->id);
        temp = temp->link;        
    }
}
int main(){
    struct node *rrr;
    rrr=(N)malloc(sizeof(struct node));
    printf("Enter the number of ids: ");
    scanf("%d",&x);
    create(rrr);
    print(rrr);
    return 0;  
}