#include<stdio.h>
int main()
{
    int n,product=1,i=1;
    
    printf("Enter n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        product=product*i;
    }
    printf("product is %d.",product);

    return 0;
}