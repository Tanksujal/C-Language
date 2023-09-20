#include<stdio.h>
main()  
{
   int n;    
   int i=0;     
   printf("Enter a number = ");  
   scanf("%d",&n); 
   
   while(n!=0)
   {
   		n = n/10;
   		i++;
   }
   printf("Total number of digits = %d",i);
}  

