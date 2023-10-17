#include<stdio.h>
void main()
{
    int m,n;
    printf("enter nuber of rows = ");
    scanf("%d",&m);
    printf("enter nuber of colums = ");
    scanf("%d",&n);
    int arr[m][n];
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("enter array  element  = ");
            scanf("%d",&arr[i][j]);
        }
    }
    cub(&arr[0][0],m,n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}
int cub(int *arr ,int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            int *p = (arr+i*n+j);
            *p = (*p)*(*p)*(*p);
        }
    }
}