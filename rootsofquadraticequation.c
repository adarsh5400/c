#include<stdio.h>
#include<math.h>
int main ()
{
    float a,b,c,real,root1,root2,disc,real part,imaginary part;
    printf("enter the coefficient of x^2(a):");
    scanf("%f",&a);
    printf("enter the coefficient of x(b):");
    scanf("%f",&b);
    printf("enter the coefficient of x(c):");
    scanf("%f",&c);
    disc=b*b-4*a*c;
    if(disc>0)
    {
        root1=(-b+sqrt(disc)/(2*a));
        root2=(-b-sqrt(disc)/(2*a));
        printf("the roots are real and distinct:\n");
        printf("root1=%f\n",root1);
        printf("root2=%f\n",root2);
        else if(disc==0)
        {
            root1=root2-b(2*a);
            printf("the roots are real and equal:\n");
            printf("root=%f\n",root1);
        }
        else{
            real part=-b(2*a);
            imaginary part=sqrt(-disc)/(2*a);
            printf("the roots are complex and conjugates:\n");
            printf("root1=%f+%f\n",real part,imaginary part);
            printf("root2=%f%f:\n",real part,imaginary part);
        }
    return 0;
    }