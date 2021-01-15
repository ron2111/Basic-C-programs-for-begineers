#include <stdio.h>
int main()
{
    char input;
    printf("Enter a character:\n");
//Input from the user
    scanf("%c", &input);
    printf("\nThe ASCII value of the given input is : %d\n", input);

//Tells the case of th alphabet
    if (input < 91 && input > 64)
    {
        printf("The alphabet %c is in upper case.(ROHAN SHARMA) ", input);
    }
    else if (input > 96 && input < 123)
    {
        printf("The alphabet %c is in lower case.(rohan sharma) ", input);
    }

    return 0;
}