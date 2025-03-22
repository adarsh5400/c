#include<stdio.h>
int main ()
{
    int marks;
    printf("enter your marks:");
    scanf("%d",&marks);
    switch(marks/10)
    {
        case10:printf("grade:O\n");
        break;
        case9:printf("grade:E\n");
        break;
        case8:printf("grade:A\n");
        break;
        case7:printf("grade:B\n");
        break;
        case6:printf("grade:C\n");
        break;
        case5:printf("grade:D\n");
        break;
        default:printf("grade:F\n");
        }
        return 0;
    }
