#include <stdio.h>

int main(void)
{
    int a, b, res, choice;

    printf("===== BITWISE OPERATIONS =====\n");
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("\n----- MENU -----\n");
    printf("1. Bitwise AND (&)\n");
    printf("2. Bitwise OR (|)\n");
    printf("3. Bitwise XOR (^)\n");
    printf("4. Bitwise NOT (~) of first number\n");
    printf("5. Left Shift (<<)\n");
    printf("6. Right Shift (>>)\n");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            res = a & b;
            printf("Bitwise AND Result = %d\n", res);
            break;
        case 2:
            res = a | b;
            printf("Bitwise OR Result = %d\n", res);
            break;
        case 3:
            res = a ^ b;
            printf("Bitwise XOR Result = %d\n", res);
            break;
        case 4:
            res = ~a;
            printf("Bitwise NOT Result = %d\n", res);
            break;
        case 5:
            res = a << b;
            printf("Left Shift Result = %d\n", res);
            break;
        case 6:
            res = a >> b;
            printf("Right Shift Result = %d\n", res);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
