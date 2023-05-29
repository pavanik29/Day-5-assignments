#include <stdio.h>
int main() 
{
    int arr[100], n, pos, value, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }
    printf("Enter the position where you want to insert the element: ");
    scanf("%d", &pos);
    printf("Enter the value that you want to insert: ");
    scanf("%d", &value);
    for (i = n - 1; i >= pos - 1; i--) 
	{
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = value;
    printf("The new array is: ");
    for (i = 0; i <= n; i++) 
	{
        printf("%d ", arr[i]);
    }
    return 0;
}

