#include <stdio.h>

int square(int n);
unsigned long long factorial(int n);

int main(void)
{
    int n, res;
    unsigned long long fact;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Please enter a non-negative number.\n");
        return 0;
    }

    res = square(n);
    fact = factorial(n);

    printf("\nSquare of %d = %d\n", n, res);
    printf("Factorial of %d = %llu\n", n, fact);

    return 0;
}

int square(int n)
{
    return n * n;
}

unsigned long long factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;

    return (unsigned long long)n * factorial(n - 1);
}
