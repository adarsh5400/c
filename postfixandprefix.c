#include<stdio.h>
int main ()
{
    int a,b,x;
    x=20;
    a=x++;
    b=++x;
    printf("the value of a:%d\n",a);
    printf("the value of a:%d\n",b);
    printf("the value of a:%d\n",x);
    return 0;
}