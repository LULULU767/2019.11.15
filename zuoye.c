#include<stdio.h>
int main (void)
{
    int n,i,sum=0,product=1;
    printf("Enter n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        product=product*i;
        sum=product+sum;
    }
    printf("Sum is %d.",sum);
    return 0;  
}