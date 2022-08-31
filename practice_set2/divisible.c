#include<stdio.h>

int main()
{
    int number;

    printf("Enter your testing number: ");
    scanf("%d", &number);

    // Since I haven't done if else statement yet so I will just be using modullo '%'
    // that is whatsoever number the user gives if the number equals 0 its divible
    // if not 0 them its not divisible.
    printf("It has a remainder: %d", number % 97);
    return 0;
}