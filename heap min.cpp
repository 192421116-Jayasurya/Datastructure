#include <stdio.h>

void heapify(int arr[], int n, int i)
{
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if(left < n && arr[left] < arr[smallest])
        smallest = left;

    if(right < n && arr[right] < arr[smallest])
        smallest = right;

    if(smallest != i)
    {
        int temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;

        heapify(arr, n, smallest);
    }
}

int main()
{
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    printf("Min Heap:\n");

    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
