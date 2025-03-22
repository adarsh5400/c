#include<stdio.h>
int main ()
{
    int r1,r2,i;
    printf("enter range(initial number):");
    scanf("%d",&r1);
    printf("enter range(final number):");
    scanf("%d",&r2);
    printf("odd numbers between %d and %d are;\n",r1,r2);
    for(i=r1;i<=r2;i++)
    {
        if(i%2!=0)
        printf("%d",i);
    }
    printf("\n");
    return 0;
}