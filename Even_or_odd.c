#include <stdio.h>
int main()
{
    int digit;
    printf("Enter the digit to be checked:\n");
    scanf("%d", &digit);

    if (digit % 2 == 0)
        printf("%d is even.", digit);
    else
        printf("%d is odd.", digit);

    return 0;
}
