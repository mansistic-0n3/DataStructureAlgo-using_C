#include <stdio.h>
int main()
{
     int a[100];
    int i, j, temp,n;	
   //length
    printf("Number of elements in array :");
    scanf("%d",&n);
    
    //elements
    printf("\nEnter elements of array :\n");
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    
    //print
    printf("Unsorted Array is : ");
    for(int i=0;i<n;i++){
        printf("%d  ", a[i]);
        
    }
for (i = 1; i < n; i++) {  
        temp = a[i];  
        j = i - 1;  
  
        while(j>=0 && temp <= a[j])    
        {    
            a[j+1] = a[j];     
            j--;    
        }    
        a[j+1] = temp;    
    } 
      printf("\nSorted array is:\n");
    for(i=0;i<n;i++){
        printf("%d  ",a[i]);
    }
    return 0;
}
