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
//Selection sort operation
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
           if(a[i]>a[j]){
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
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
