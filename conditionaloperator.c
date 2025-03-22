#include<stdio.h>
int main ()
{
    int a,b,min;
    printf("enter the value of a\n");
    scanf("%d",&a);
    printf("enter the value of b\n");
    scanf("%d",&b);
    min=(a<b?a:b);
    printf("the value of min=%d",min);
    return 0;
}