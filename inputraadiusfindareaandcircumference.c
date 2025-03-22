#include<stdio.h>
int main ()
{
   float rad,a,c;
    printf("enter the raadius of circle\n");
    scanf("%f",&rad);
    a=3.14*rad*rad;
    printf("area=%f\n",a);
    c=2*3.14*rad;
    printf("circumference=%f\n",c);
    return 0;
}