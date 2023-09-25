#include<stdio.h>
main()
{
    int i,j,s,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(s=i;s<=4;s++)
        {
            printf("  ");
        }
        for(k=i;k>=1;k--)
        {
            printf("%d",k);
        }
        printf("\n");
    }
}
