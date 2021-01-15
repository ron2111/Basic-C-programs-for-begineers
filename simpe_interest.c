#include <stdio.h>

int main()
{
    float rate, time, principle, SI;

    printf("Enter the principle amount:\n");
    scanf("%f", &principle);

    printf("Enter the time:\n");
    scanf("%f", &time);

    printf("Enter the rate:\n");
    scanf("%f", &rate);

    SI = principle * time * rate / 100;

    printf("The Simple Interest for the above quantities is %.2f.", SI);

    return 0;
}
