#include<stdio.h>
 void main()
{
    int m,n;
   
    printf("enter  row size = ");
    scanf("%d",&m);
     printf("enter column size = ");
    scanf("%d",&n);
       int a[m][n];
       int i,j;
       for(i=0;i<m;i++)
       {
        for(j=0;j<n;j++)
        {
            printf("enter array element = ");
            scanf("%d",&a[i][j]);
        }
        printf("\n");
       }

       for(i=0;i<m;i++)
       {
        for(j=0;j<n;j++)
        {
            if(i==0||j==0||i==m-1||j==n-1)
            {
                printf("%d",a[i][j]);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
       }
       
}