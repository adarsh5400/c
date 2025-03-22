#include<stdio.h>
int main ()
{
    int r1,r2,i;
    printf("enter range(initial number):");
    scanf("%d",&r1);
    printf("enter range(final number):");
    scanf("%d",&r2);
    printf("even numbers between %d and %d are;\n",r1,r2);
    i=((r1%2==0)?r1:r1+1);
    while(i<=r2);
    {
        printf("%d",i);
        i+=2;
    }
    printf("\n");
    return 0;
}