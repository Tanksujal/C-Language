#include<stdio.h>
#include<string.h>
main()
{
    char ch[50];
    int count=0;
    printf("enter string  = ");
    gets(ch);
    char *p = &ch;
    while(*p!='\0')
    {
        count++;
        p++;
    }
    printf("your string length is = %d",count);
}