#include <stdio.h>

int main(void)
{
    int n, i, sum = 0;
    unsigned long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Please enter a non-negative number.\n");
        return 0;
    }

    printf("\nNumbers from 1 to %d:\n", n);
    for (i = 1; i <= n; i++)
        printf("%d ", i);

    i = 1;
    while (i <= n)
    {
        sum = sum + i;
        fact = fact * i;
        i++;
    }

    printf("\n\nSum of numbers = %d\n", sum);
    printf("Factorial of %d = %llu\n", n, fact);

    return 0;
}
