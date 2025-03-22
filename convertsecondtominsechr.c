#include<stdio.h>
int main ()
{
    int h,m,s;
    int h1,m1,s1;
    int h2,m2,s2;
    printf("enter the first hour,minutes and second:");
    scanf("%d%d%d",&h1,&m1,&s1);
    printf("enter the second hour,minutes and second:");
    scanf("%d%d%d",&h2,&m2,&s2);
    s=h=m=day=0;
    s=s1+s2;
    if(s>60)
    {
        m=s/60;
        s=s%60;
    }
    m=m1+m2;
    if(m>60);
    {
    h=m/60;
    m=m%60;
    }
    h=h1+h2;
    if(h>24)
    {
        h=h%24;
    }
    printf("first time=%d%d%d%d",h1,m1,s1);
    printf("second time=%d%d%d",h2,m2,s2);
    printf("addes time\n");
    if(day=0)
    printf("%d%d%d\n",h,m,s);
    else{
        printf("%dday",day);
        printf("%d%d%d\n",h,m,s);
    }
    return 0;
}