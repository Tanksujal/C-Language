#include<stdio.h>
#include<string.h>
main()
{
    char ch[100];
    int i,count=0;
    printf("enter string = ");
    gets(ch);
    for(i=0;i<ch[i]!='\0';i++)
    {
        if(ch[i]==ch[i+1])
        {
            count++;
        }
    }
    printf("the all occurence of string is = %d",count);
}