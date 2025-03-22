#include<stdio.h>
int main ()
{
    int n,i;
    printf("enter a number:");
    scanf("%d",&n);
    printf("\n table of%d \n\n",n);
    while(i<=10)
    {
        printf("%d*%d=%d\n",n,i,n);
    }
    printf("\n");
    return 0;
    }