#include<stdio.h>
int main ()
{
    int a,n,i,test=1;
    printf("enter a number:");
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
    {
    test=0;
    break;
}
    }
    if(test==1&&n!=1)
    {
        printf("%d is a prime number:\n");
    }
    else{
        printf("%d is not a prime number:\n");
    }
    return 0;
}