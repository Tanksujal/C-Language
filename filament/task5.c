#include<stdio.h>
#include<string.h>
main()
{
	char ch[1000];
	int i,count=0;
	printf("enter string = ");
	gets(ch);
	for(i=0;i<ch[i]!='\0';i++)
	{
		if(ch[i] == ' ' && ch[i+1] != ' ' )
		{
			count++;
		}
	}
	printf("the world is in string  = %d",count+1);
}
