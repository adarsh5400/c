#include<stdio.h>
int main ()
{
    char ch;
    printf("entter an alphabet:\n");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='o'||ch=='U')
    {
        printf("the entered value is in vowel:\n");
    }
    else
    {
        printf("the entered value is consonant:\n");
    }
    return 0;
}