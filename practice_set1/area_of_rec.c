#include<stdio.h>

int main()
{
    int length;
    int width;
    
    printf("Enter your value for length: ");
    scanf("%d", &length);

    printf("Enter your value for width: ");
    scanf("%d", &width);

    int area = length * width;
    printf("Area of Rectangle = %d\n", area);
   
    return 0;
}