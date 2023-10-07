#include<stdio.h>
#include<string.h>
main()
{
	char ch[50];
	int i;
	printf("enter string = ");
	gets(ch);
	for(i=0;i<ch[i]!='\0';i++)
	{
		if(ch[i]>='A' && ch[i]<='Z')
		{
			ch[i] = ch[i] + 32;
		}
		else if(ch[i]>='a' && ch[i]<='z')
		{
			ch[i] = ch[i] - 32;
		}
	}
	puts(ch);
}
