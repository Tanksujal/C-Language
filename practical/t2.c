#include<stdio.h>
void main()
{
    printf("enter marks out of 100\n");
    int math,guj,eng,hin,sci,total,grade;
    float per;
    printf("enter your maths marks =");
    scanf("%d",&math);
    printf("enter your guj marks = ");
    scanf("%d",&guj);
     printf("enter your eng marks = ");
    scanf("%d",&eng);
     printf("enter your hin marks = ");
    scanf("%d",&hin);
     printf("enter your sci marks = ");
    scanf("%d",&sci);
    total = math+guj+eng+hin+sci;
    per =(total*100)/500;
    if(per>91&&per<100)
    {
        printf("a1grade");
    }
    else if(per>81&&per<90){
        printf("a2");
    }
    else if(per>71&&per<80)
    {
        printf("b1");
    }
    else if(per>61&&per>70)
    {
        printf("b2");
    }
    else if(per>51&&per<60)
    {
        printf("c1");
    }
    else if(per>33&&per<40)
    {
        printf("c2");
    }
    else if(per>21&&per<32)
    {
        printf("e1");
    }
    else
    {
        printf("e2");
    }
}