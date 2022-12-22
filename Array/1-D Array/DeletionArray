#include <stdio.h>

int main()
{
    int i, pos, n;
    int arr[100];

  //length
    printf("Number of elements in array :");
    scanf("%d",&n);
    
    //elements
    printf("\nEnter elements of array :\n");
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    
    //print
    printf("Array : ");
    for(int i=0;i<n;i++){
        printf("%d  ", arr[i]);
        
    }

   
    // Input element position to delete 
    printf("\nEnter the element position to delete : ");
    scanf("%d", &pos);


    //Invalid delete position 
    if(pos < 0 || pos > n)
    {
        printf("Invalid position! Please enter position between 1 to %d", n);
    }
    else
    {
        //Copy next element value to current element
        for(i=pos-1; i<n-1; i++)
        {
            arr[i] = arr[i + 1];
        }

        n--;

        //after deletion 
        printf("Elements of array after deletion are : ");
        for(i=0; i<n; i++)
        {
            printf("%d\t", arr[i]);
        }
    }

    return 0;
}
