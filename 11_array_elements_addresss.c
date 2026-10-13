
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int i;

    printf("Array Elements and Their Memory Addresses:\n");

    for (i = 0; i < 5; i++) {
        printf("Element = %d, Address = %p\n",
               arr[i], (void *)&arr[i]);
    }

    return 0;
}
