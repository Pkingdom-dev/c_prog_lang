#include<stdio.h>

int main()
{
    int c;

    printf("Enter your value for celcius: ");
    scanf("%d", &c);

    float fahrenheit = (1.8 * c) + 32;
    printf("Temperature = %f F", fahrenheit);

    return 0;
}