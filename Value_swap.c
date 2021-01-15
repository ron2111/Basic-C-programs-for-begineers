#include <stdio.h>
int main()
{
    int num1, num2;

    printf("Enter your first number:\n");
    scanf("%d", &num1);

    printf("Enter your second number:\n");
    scanf("%d", &num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("Now, the first number is %d and the second number is %d.", num1, num2);

    return 0;
}
