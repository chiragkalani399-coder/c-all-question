// to print smallest number among three number
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
    printf("Enter third number: ");
    scanf("%d", &z);
    if (x >= y && x >= z)
    {
        printf("%d is greatest", x);
    }
    else if (y >= x && y >= z)
    {
        printf("%d is greatest", y);
    }
    else
    {
        printf("%d is greatest", z);
    }
    return 0;
}