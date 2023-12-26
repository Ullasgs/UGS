//Program to find maximum of n numbers using dynamic arrays.
#include <stdio.h>
#include <stdlib.h>
void main(){
    int *arr, n, i, max=0;
    printf("Enter the size of the array:   ");
        scanf("%d", &n);
    arr = (int*)calloc(n, sizeof(int));
    printf("Enter the numbers in the array:   ");
    for(i=0;i<n;i++){
        scanf("%d",arr+i);
        if(max<*(arr+i)){
        max=*(arr+i);}
    }
    printf("The given elements are: ");
    for(i=0;i<n;i++)
        printf("%d ",*(arr+i));
    printf("\n The largest number is %d", max);
    free(arr);
}
