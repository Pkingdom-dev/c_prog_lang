#include<stdio.h>

int main()
{
    float pi = 3.141;
    int radius;
    int height;

    printf("Enter your value for radius: ");
    scanf("%d", &radius);

    float area_of_circle = pi * radius * radius;
    printf("Area of a Circle = %f\n", area_of_circle);

    printf("Enter your value for height: ");
    scanf("%d", &height);

    float volume_of_cylinder = pi * radius * radius * height;
    printf("Volume of a Cylinder = %f", volume_of_cylinder);

    return 0;
}