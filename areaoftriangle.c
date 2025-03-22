#include<stdio.h>
int main ()
{
    float area,base,height;
    printf("enter the base:");
    scanf("%f",&base);
    printf("enter the height:");
    scanf("%f",&height);
    area=(base*height)/2;
    printf("the area of triangle,%f",area);
    return 0;
}