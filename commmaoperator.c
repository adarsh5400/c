#include<stdio.h>
int main ()
{
    int a,b;
    printf("enter a=");
    scanf("%d",&a);
    (b=a++,a);
    printf("value of a now=%d",a);
    printf("value of b after comma operator%d\n",b);
    return 0;
}