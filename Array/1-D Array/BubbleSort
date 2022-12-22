#include <stdio.h>

int main()
{
     int a[100];
    int i, j, temp,n;
	
   //Enter the size of an array
    printf("Enter the size of an array :");
    scanf("%d",&n);
   
    //Enter the elements of an array
    printf("Enter elements of array\n");
    for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
	    }
	 
	//Printing the array without sorting  
	printf("Unsorted array:\n");
	for(i=0;i<n;i++)
        {
            printf("%d   ",a[i]);
	    }


    //Bubble sort operation
    for(i=0;i<n;i++){
        for(j=0;j<((n-1)-i);j++){
           if(a[j]>a[j+1]){
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
           } 
        }
    }
    
    
    //Sorted array
    printf("\nSorted array is:\n");
    for(i=0;i<n;i++){
        printf("%d  ",a[i]);
    }
 
    return 0;
}
