// average of three numbers
#include <stdio.h>
int main()
{
    int x;
    printf("Enter first number: ");
    scanf("%d", &x);
    int y;
    printf("Enter second number: ");
    scanf("%d", &y);
    int z;
    printf("Enter the third number: ");
    scanf("%d", &z);

    float avg = (float)(x + y + z) / 3;
    printf("Average of three numbers is %f", avg);
    return 0;
}