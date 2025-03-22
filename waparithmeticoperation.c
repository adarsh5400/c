#include<stdio.h>
int main ()
{
    float a,b,c;
    printf("enter the value of a=");
    scanf("%f",&a);
    printf("enter the value of b=");
    scanf("%f",&b);
    c=a+b;
    printf("addition=%f",c);
    c=a-b;
    printf("substraction=%f",c);
    c=a*b;
    printf("multiplication=%f",c);
    c=a/b;
    printf("division=%f",c);
    int d;
    d=(int)a%(int)b;
    printf("modulus=%d",d);
    return 0;
}