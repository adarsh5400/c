#include<stdio.h>
int main ()
{
 int num;
 printf("enter your marks:\n");
 scanf("%d",&num);
 if(num>=90)
 {
    printf("you got O grade\n");
 }   
 else if(num>=80)
 {
    printf("you got E grade\n");
 }
 else if(num>=70)
 {
    printf("you got A grade\n");
 }
 else if(num>=60)
 {
    printf("you got B grade\n");
 }
 else if(num>=50)
 {
    printf("you got C grade\n");
 }
 else if (num>=40)
 {
    printf("you got D grade\n");
 }
 else(num<40)
 {
    printf("you got F grade\n");
 }
return 0;
}