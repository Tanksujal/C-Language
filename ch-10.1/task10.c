#include<stdio.h>
main()
{
    int i,j,s,k;
    for(i=1;i<=5;i++)
    {
        for(s=i;s<=4;s++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
       for(j=i-1;j>=1;j--)
       {
        printf("%d",j);
       }
        printf("\n");
    }
}