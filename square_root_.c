#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    double root = 0.0;
    double increment = 0.1;

    while ((root + 1) * (root + 1) <= n)
    {
        root++;
    }

    for (int i = 0; i < 6; i++)
    {
        while ((root + increment) * (root + increment) <= n)
        {
            root = root + increment;
        }
        increment = increment / 10;
    }

    printf("Square root of %d is %.6lf", n, root);
    return 0;
}