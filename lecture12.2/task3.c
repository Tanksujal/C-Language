#include<stdio.h>
struct std
{
	int id,age,std;
	char name[50];
	char course[50];
	char city[50];
	char school[50];
	char user[50];
	char pwd[50];
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
		printf("enter your username = ");
		scanf("%s",&s[i].user);
		printf("enter your password = ");
		scanf("%s",&s[i].pwd);
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
	};
	
	char username[50], password[50];
    printf("Login System\n");
    printf("Enter your username: ");
    scanf("%s", username);
    printf("Enter your password: ");
    scanf("%s", password);
	int login = -1;
	
	for(i=1;i<=no;i++)
	{
		if(strcmp(s[i].user,username)==0&&strcmp(s[i].pwd,password)==0)
		{
			login = 0;
		}
		else
		{
			login = -1;
		}
	}
	if(login == 0)
	{
		printf("login succesfully!");
	}
	else
	{
		printf("please try again");
	}
}
