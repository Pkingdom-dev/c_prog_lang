#include<stdio.h>

int main()
{
    int principal;
    int rate;
    int time;

    printf("Enter your value for principal: ");
    scanf("%d", &principal);

    printf("Enter your value for rate: ");
    scanf("%d", &rate);

    printf("Enter your value for time: ");
    scanf("%d", &time);
    
    int s_i = principal * rate * time;
    printf("Simple Interest = %d", s_i);
    return 0;
}