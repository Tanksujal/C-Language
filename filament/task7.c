#include<stdio.h>
#include<string.h>
main()
{
    char ch[50];
    int i,count=0;
    printf("enter string = ");
    gets(ch);
    for(i=0;i<ch[i]!='\0';i++)
    {
        count++;
    }
    printf("the string length is = %d ",count);
}