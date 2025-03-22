#include<stdio.h>
int main ()
{
    int x;
    printf("enter the number\n");
    scanf("%d",&x);
    if(x>0)
    {
        printf("%d is positive\n",x);
    }
    else if (x==0)
    {
    printf("%d is zero\n",x);
    }
    else
    {
        printf("%d is negative\n",x);
    }
    return 0;
}