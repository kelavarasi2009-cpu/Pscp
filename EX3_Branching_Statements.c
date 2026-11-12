#include <stdio.h>

int main(void)
{
    int a, b, choice;

    printf("===== BRANCHING STATEMENTS =====\n");
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("\n----- MENU -----\n");
    printf("1. Check Positive, Negative or Zero\n");
    printf("2. Check Even or Odd\n");
    printf("3. Find Largest of Two Numbers\n");
    printf("4. Check Divisibility by 5\n");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    printf("\n----- RESULT -----\n");
    switch (choice)
    {
        case 1:
            if (a > 0)
                printf("%d is Positive\n", a);
            else if (a < 0)
                printf("%d is Negative\n", a);
            else
                printf("%d is Zero\n", a);
            break;
        case 2:
            if (a % 2 == 0)
                printf("%d is Even\n", a);
            else
                printf("%d is Odd\n", a);
            break;
        case 3:
            if (a > b)
                printf("%d is the Largest Number\n", a);
            else if (b > a)
                printf("%d is the Largest Number\n", b);
            else
                printf("Both numbers are Equal\n");
            break;
        case 4:
            if (a % 5 == 0)
                printf("%d is Divisible by 5\n", a);
            else
                printf("%d is Not Divisible by 5\n", a);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
