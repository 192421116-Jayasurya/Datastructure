#include <stdio.h>

int main()
{
    int arr[100], n, value, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to insert at beginning: ");
    scanf("%d", &value);

    for(i = n; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[0] = value;
    n++;

    printf("Array after insertion:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
