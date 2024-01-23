#include <stdio.h>
int GCD(int i,int j){
    if(j>i)
        return GCD(j,i);
    if(j==0)
        return i;
    else
        return GCD(j,i%j);
}
int main(){
    int a,b;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&a,&b);
    printf("GCD is %d\n", GCD(a,b));
}