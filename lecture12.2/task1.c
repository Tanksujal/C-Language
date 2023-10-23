#include<stdio.h>
struct std
{
	int id,age,std;
	char name[50];
	char course[50];
	char city[50];
	char school[50];
};

main()
{
	int i,no;
	struct std s[50];
	printf("Enter no :- ");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		printf("student no :- %d\n",i);
		printf("enter your name = ");
		scanf("%s",&s[i].name);
		printf("enter your id = ");
		scanf("%d",&s[i].id);
		printf("enter your age = ");
		scanf("%d",&s[i].age);
		printf("enter your course = ");
		scanf("%s",&s[i].course);
		printf("enter your city = ");
		scanf("%s",&s[i].city);
		printf("wnter your school = ");
		scanf("%s",&s[i].school);
		printf("enter your standard = ");
		scanf("%d",&s[i].std);
		printf("\n");
	}
	for(i=1;i<=no;i++)
	{
		printf("your id is  = %d\n",s[i].id);		
		printf("your age is = %d\n",s[i].age);
		printf("your name is = %s\n",s[i].name);
		printf("your course is = %s\n",s[i].course);
		printf("your city is %s\n",s[i].city);
		printf("your school is  = %s\n",s[i].school);
		printf("your standard is = %d\n",s[i].std);
		printf("\n\n");
	}
}
