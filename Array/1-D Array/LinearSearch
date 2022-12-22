#include <stdio.h>

int main()
{
    int i, n, search;
    int a[100];

  //length
    printf("Number of elements in array :");
    scanf("%d",&n);
    
    //elements
    printf("\nEnter elements of array :\n");
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    
    //print
    printf("Array : ");
    for(int i=0;i<n;i++){
        printf("%d  ", a[i]);
        
    }

   printf("\nElement to be searched: ");
   scanf("%d", &search);
   
   for(i=0;i<n;i++){
       if(search == a[i])
       {
           printf("Element present at position %d ", i+1);
           break;
       }
   }
   if (i==n){
       printf("Not found!");
   }
    return 0;
}
