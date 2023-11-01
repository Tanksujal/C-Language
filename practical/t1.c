#include<stdio.h>
char check(char ch);
char main()
{
    char ch;
    printf("enter = ");
    scanf("%c",&ch);
    check(ch);
}
char check(char ch)
{
    if(ch>='a'&&ch<='z')
    {
        printf("this is alfhabet");
    }
    else if (ch>='1'&&ch<='9')
    {
        printf("this is digit");
    }
    else{
        printf("this is special charcter");
    };
    
}