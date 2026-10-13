
 // Topic: Sum of All Elements of a One-Dimensional Array
#include <stdio.h>

int main()
{
    int arr[100], n, i, sum = 0;

    printf("Enter the number of elements (1-100): ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Invalid array size!\n");
        return 1;
    }

    printf("Enter %d array elements:\n", n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    printf("Sum of all array elements = %d\n", sum);

    return 0;
}