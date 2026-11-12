#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[100], str2[50], str3[100];
    int res;

    printf("Enter the first string (no spaces): ");
    scanf("%49s", str1);
    printf("Enter the second string (no spaces): ");
    scanf("%49s", str2);

    res = (int)strlen(str1);
    printf("\nLength of first string = %d\n", res);

    strcpy(str3, str1);
    printf("Copied string = %s\n", str3);

    res = strcmp(str1, str2);
    if (res == 0)
        printf("Both strings are equal\n");
    else
        printf("Both strings are not equal\n");

    if (strlen(str1) + strlen(str2) < sizeof(str1))
    {
        strcat(str1, str2);
        printf("Concatenated string = %s\n", str1);
    }
    else
    {
        printf("Strings are too long to concatenate.\n");
    }

    return 0;
}
