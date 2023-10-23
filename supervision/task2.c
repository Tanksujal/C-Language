#include<stdio.h>
struct student{
	int roll,che,math,phy;
	char name[50];
};
void main()
{
	int i,total;
	float per;
	struct student s[5];
	for(i=0;i<5;i++)
	{
		printf("Enter details of Student %d\n",i+1);
		printf("Enter your roll number :- ");
		scanf("%d",&s[i].roll);
		printf("Enter your name :- ");
		scanf("%s",&s[i].name);
		printf("Enter your chemistrey marks :");
		scanf("%d",&s[i].che);
		printf("Enter your mathmatic marks :- ");
		scanf("%d",&s[i].math);
		printf("Enter your physics marks :- ");
		scanf("%d",&s[i].phy);
		printf("\n");
	}
	for(i=0;i<5;i++)
	{
		printf("Name :- %s\n",s[i].name);
		printf("Roll no. :- %d\n",s[i].roll);
		printf("chemistrey marks :- %d\n",s[i].che);
		printf("mathmatic marks :- %d\n",s[i].math);
		printf("physics marks :- %d\n",s[i].phy);
		total = s[i].che + s[i].math + s[i].phy;
		per = total * 100 / 300;
		printf("%d/300\n",total);
		printf("percentage is  = %.2f\n",per);
		printf("\n\n");
	}
}




