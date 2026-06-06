// to check if a given number is a natural number or not
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number to check: ");
    scanf("%d", &n);
    if (n >= 1)
    {
        printf("%d is a natural number", n);
    }
    else
    {
        printf("%d is not a natural number", n);
    }
    return 0;
}