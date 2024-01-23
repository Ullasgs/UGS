#include <stdio.h>
void toh(int n, char s, char t, char d ){
    if(n==1){
        printf("Move disk 1 from %c to %c \n", s, t);
        return;
    }
    toh(n-1, s, d, t);
    printf("\n Move disk %d from %c to %c \n", n , s, t);
    toh(n-1,d,t,s);
}
int main(){
    printf("Enter the value of n ");
    int n; scanf("%d", &n);
    toh(n, 'A','B','C');
    return 0;
}