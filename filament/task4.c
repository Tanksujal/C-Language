#include<stdio.h>
#include<string.h>
main()
{
	char ch[50];
	int count=0,i;
	printf("enter string  = ");
	gets(ch);
	for(i=0;i<ch[i]!='\0';i++)
	{
		if(ch[i]=='a' || ch[i]=='A' || ch[i]=='e' || ch[i]=='E' || ch[i]=='i' || ch[i]=='I' || ch[i]=='o' || ch[i]=='O' || ch[i]=='u' || ch[i]=='U')
		{
			count++;
		}
	}
	printf("the number of vowel is = %d",count);
} 
