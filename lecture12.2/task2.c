#include<stdio.h>
struct emp
{
	int id,age;
	char name[50];
	char role[50];
	char city[50];
	char exp[50];
	char company_name[50];
};

main()
{
	int i,no;
	struct emp e[50];
	printf("Enter no :- ");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		printf("employe no :- %d\n",i);
		printf("enter your name = ");
		scanf("%s",&e[i].name);
		printf("enter your id = ");
		scanf("%d",&e[i].id);
		printf("enter your age = ");
		scanf("%d",&e[i].age);
		printf("enter your experience = ");
		scanf("%s",&e[i].exp);
		printf("enter your city = ");
		scanf("%s",&e[i].city);
		printf("wnter your company name  = ");
		scanf("%s",&e[i].company_name);
		printf("enter your role = ");
		scanf("%s",&e[i].role);
		printf("\n");
	}
	for(i=1;i<=no;i++)
	{
		printf("emoloye no = %d\n",i);	
		printf("your id is  = %d\n",e[i].id);		
		printf("your age is = %d\n",e[i].age);
		printf("your name is = %s\n",e[i].name);
		printf("your expercience is = %s\n",e[i].exp);
		printf("your city is %s\n",e[i].city);
		printf("your company is  = %s\n",e[i].company_name);
	    printf("your role is = %s\n",e[i].role);
	    printf("\n\n");
	}
}
