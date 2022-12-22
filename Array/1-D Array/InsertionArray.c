#include <stdio.h>

int main()
{
    
    int a[100] = { 0 };
    int i, x, pos, n;
 
  //length
    printf("Number of elements in array :");
    scanf("%d",&n);
    
    //elements
    printf("Enter elements of array :\n");
    for(int i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    
    //print
    printf("Array : ");
    for(int i=0;i<n;i++){
        printf("%d  ", a[i]);  
    }
    // element to be inserted
    printf("\nElement to be inserted :\n");
        scanf("%d",&x);

    // position at which element
    // is to be inserted
    printf("Insert at position :\n");
    scanf("%d",&pos);
 
    // increase the size by 1
    n++;
 
    // shift elements forward
    for (i = n-1; i >= pos; i--)
        a[i] = a[i - 1];
 
    // insert x at pos
    a[pos - 1] = x;
 
    // print the updated array
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");

    return 0;
}
