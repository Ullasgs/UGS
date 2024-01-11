//Merging 2 sorted lists
//program to insert nodes in a sorted list
#include <stdio.h>
#include <stdlib.h>
typedef struct node * N;
struct node{
    int data;
    N link;
};
int x;
void print(N l){
    N temp;
    temp = l;
    printf("the numbers are: \n");
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp = temp->link;        
    }
    printf("\n");
}
N mgsort(N head1,N head2){
    struct node m;
    N head3 = &m;
    while(head1 && head2){
        if(head1->data<head2->data || head2==NULL){
            head3->link = head1;
            head1 = head1->link;
        } else {
            head3->link = head2;
            head2 = head2->link;
        }
    head3 = head3->link;
    }
    head3->link = NULL;
    return head3;
}
N create(N h){
    N temp,new;
    int n,t=1;
    printf("Enter the size of the list %d: ",t);
    scanf("%d",&x);
    printf("Enter the data 1: ");
    scanf("%d",&n);
    h->data=n;
    h->link=NULL;
    temp = h;
    for(int i=1;i<x;i++){
        new = (N)malloc(sizeof(struct node));
        printf("Enter the data %d: ", i+1);
        scanf("%d", &n);
        new->data=n;
        new->link=NULL;
        temp->link=new;
        temp=temp->link;
    }
    temp->link = NULL;
    t++;
    return h;
}
int main(){
    N l1,l2;
    l1 = (N)malloc(sizeof(struct node));
    l2 = (N)malloc(sizeof(struct node));
    create(l1);
    create(l2);
    N l3=mgsort(l1,l2);
    print(l3);
    return 0;
}