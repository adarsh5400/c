#include<stdio.h>
int main ()
{
    int r,p,pi;
    printf("enter amount of rupees=\n");
    scanf("%f",&r);
    printf("enter amount of paisa=\n");
    scanf("%f",&p);
    pi=r*100+p;
    printf("inpaisa=%d\n",pi);
    return 0;
}