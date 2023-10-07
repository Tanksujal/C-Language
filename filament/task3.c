#include<stdio.h>
#include<string.h>
main()
{
	char ch[50];
	int i,length=0;
	printf("enter string = ");
	gets(ch);
	for(i=0;i<ch[i]!='\0';i++)
	{
		length++;
	}
	printf("total count of string is = %d",length);
}
