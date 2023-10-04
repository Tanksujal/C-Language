#include <stdio.h>

int main() {
    int arr[50],i,j,smax,max;
    
    printf("5. second largest number in array..\n\n");
    printf("Enter number in array :- ");
    scanf("%d", &j);

    
    printf("Enter %d Value :-\n", j);
    for (i=0;i<j;i++){
        scanf("%d", &arr[i]);
    }
    
    max= arr[0]; 
    smax= arr[0];
    
    for (i=1;i<j;i++){
        if (arr[i]>max){
        	smax=max;
            max= arr[i];
        }
        else if (arr[i]>smax && arr[i]!=max){
            smax =arr[i]; 
        }
    }

    
    printf("Second Maximum value is:- %d\n", smax);

}

