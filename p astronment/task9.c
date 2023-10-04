#include <stdio.h>

int main() {
    int arr[50],i,j,min,max;
    
    printf("4. minimum and maximum element in array\n\n");
    printf("Enter number in array :- ");
    scanf("%d", &j);

    
    printf("Enter %d Value :-\n", j);
    for (i=0;i<j;i++){
        scanf("%d", &arr[i]);
    }
    
    min = arr[0]; 
    max = arr[0];
    
    for (i=1;i<j;i++){
        if (arr[i]<min){
            min= arr[i];
        }
        if (arr[i]>max){
            max =arr[i]; 
        }
    }

    printf("Minimum value is :- %d\n", min);
    printf("Maximum value is:- %d\n", max);

}

