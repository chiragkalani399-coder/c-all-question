// sum of n natural numbers using recursion
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sum(n - 1);
}
#include <stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Sum of first %d natural numbers is %d", n, sum(n));
    return 0;
}