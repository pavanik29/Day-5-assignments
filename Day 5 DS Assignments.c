#include <stdio.h>
int main()
{
    int arr[100], i, n, pos;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the position of the element to be deleted: ");
    scanf("%d", &pos);
    if(pos < 0 || pos >= n)
    {
        printf("Invalid position! Please enter a valid position between 0 and %d.", n-1);
    }
    else
    {
        for(i=pos; i<n-1; i++)
        {
            arr[i] = arr[i+1];
        }
        n--;
        printf("The array after deleting the element is: ");
        for(i=0; i<n; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}

