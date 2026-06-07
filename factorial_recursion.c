// factorial of a number n using recursion
int fact(int n)
{
    if ((n == 1) || (n == 0))
    {
        return 1;
    }
    return n * fact(n - 1);
}
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("factorial of %d is: %d", n, fact(n));
    return 0;
}