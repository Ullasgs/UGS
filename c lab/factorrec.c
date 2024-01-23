#include <stdio.h>
int factor(int a){
    if(a==1){
        return 1;
    }
    return a*factor(a-1);
}
int main(){
    printf("Enter the value of n: ");
    int n;
    scanf("%d", &n);
    printf("Factorial of %d is %d. \n", n, factor(n));
}