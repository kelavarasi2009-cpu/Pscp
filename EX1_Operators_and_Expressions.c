#include <stdio.h>

int main(void)
{
    int a, b, choice, res;

    printf("===== OPERATORS AND EXPRESSIONS =====\n");
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("\n----- MENU -----\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            res = a + b;
            printf("Result = %d\n", res);
            break;
        case 2:
            res = a - b;
            printf("Result = %d\n", res);
            break;
        case 3:
            res = a * b;
            printf("Result = %d\n", res);
            break;
        case 4:
            if (b != 0)
                printf("Result = %d\n", a / b);
            else
                printf("Division by zero is not possible.\n");
            break;
        case 5:
            if (b != 0)
                printf("Result = %d\n", a % b);
            else
                printf("Modulus by zero is not possible.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
