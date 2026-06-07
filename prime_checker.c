// prime number or not
#include <stdio.h>
int main()
{
    int n;
    printf("enter a number to check: ");
    scanf("%d", &n);
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("%d is a prime number", n);
    }
    else
    {
        printf("%d is not a prime number", n);
    }
    return 0;
}
