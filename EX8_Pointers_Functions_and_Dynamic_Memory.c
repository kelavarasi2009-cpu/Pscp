#include <stdio.h>
#include <stdlib.h>

/* Call by Value */
int addByValue(int a, int b)
{
    return a + b;
}

/* Call by Reference using pointers */
void swapByReference(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int a, b, res;
    int *ptr;
    int *arr;
    int n, i, sum = 0;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    /* Pointer demonstration */
    ptr = &a;
    printf("\nPointer Demonstration:\n");
    printf("Value of a = %d\n", *ptr);
    printf("Address of a = %p\n", (void *)ptr);

    /* Call by Value */
    res = addByValue(a, b);
    printf("\nCall by Value:\n");
    printf("Sum = %d\n", res);

    /* Call by Reference */
    swapByReference(&a, &b);
    printf("\nCall by Reference:\n");
    printf("After swapping, first number = %d\n", a);
    printf("After swapping, second number = %d\n", b);

    /* Dynamic Memory Allocation */
    printf("\nDynamic Memory Allocation\n");
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive number of elements.\n");
        return 0;
    }

    arr = (int *)malloc((size_t)n * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++)
        sum = sum + arr[i];

    printf("Sum of dynamically allocated array = %d\n", sum);

    free(arr);
    return 0;
}
