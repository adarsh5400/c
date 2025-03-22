#include<stdio.h>
int main ()
{
    int a,b,c;
    a=15;
    b=17;
    c=a&b;
    printf("%d\n",c);
    c=a/b;
    printf("%d\n",c);
    c=a^b;
    printf("%d\n",c);
    return 0;
}