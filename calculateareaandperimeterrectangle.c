#include<stdio.h>
int main ()
{
float area,perimeter,length,breadth;
printf("enter the length of rectangel=\n");
scanf("%f",&length);
printf("enter the breadth of rectangle=\n");
scanf("%f",&breadth);
area=length*breadth;
printf("area=%f\n,area");
perimeter=2*(length+breadth);
printf("perimeter=%f\n",perimeter);
return 0;
}