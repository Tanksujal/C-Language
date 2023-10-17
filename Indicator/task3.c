#include<stdio.h>
void main()
{
    int a,b;
    printf("enter a = ");
    scanf("%d",&a);
    printf("enter b = ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("your swap value of a is = %d\n",a);
    printf("your swap value of b is = %d",b);
}
void swap(int *a,int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}