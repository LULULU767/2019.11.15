#include<stdio.h>
int main ()
{
    int n,sum=0;
    int i;
    printf("Enter n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("sum is %d.",sum);
    return 0;
}    
