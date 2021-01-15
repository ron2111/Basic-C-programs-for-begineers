#include <stdio.h>

int main()
{
    int n, number1, number2, number3, reverse_num;

    printf("Enter the number to reverse:\n");
    scanf("%d", &n);

    number1 = n / 100;
    number2 = (n % 100) / 10;
    number3 = (n % 10);

    reverse_num = number3 * 100 + number2 * 10 + number1;

    printf(" The reverse is %d", reverse_num);

    return 0;
}