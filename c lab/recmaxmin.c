#include <stdio.h>
int min(int a[],int n,int i)
{
 	static int x=0;
 	if(i<n){
        if(a[x]>a[i]){
		    x=i;
		    min(a,n,++i); 
        }
    }
        return x;
 }
 int max(int a[],int n,int i)
 {
 	static int y=0;;
 	if(i<n){
       	if(a[y]<a[i]){
			y=i;
			max(a,n,++i);      
        }
	}
    return y;
}
int main(){
    int a[1000],i,n,sum;
    printf("Enter size of the array : ");
    scanf("%d", &n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    printf("Minimum of array is : %d",a[(min(a,n,1))]);
    printf("\nMaximum of array is : %d",a[(max(a,n,1))]);  
}