#include<stdio.h>
int main ()
{
    int a,b;
    printf("enter first integer:");
    scanf("%d",&a);
    printf("enter second integer:");
    scanf("%d",&b);
    a=a*b;
    b=a/b;
    a=a/b;
    printf("the numbers after swapping are:%d%d",a,b);
    return 0;
}