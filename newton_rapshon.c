// another method to calculate square root
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    double x = n;
    for (int i = 0; i <= 20; i++)
    {
        x = (x + (n / x)) / 2;
    }
    printf("Square root of %d is %.10lf", n, x);
    return 0;
}