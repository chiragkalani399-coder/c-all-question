// fibonacci sequence upto n
int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    return fibo(n - 1) + fibo(n - 2);
}
#include <stdio.h>
int main()
{
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    printf("Fibonacci sequence: \n");

    for (int i = 0; i <= n; i++)
    {
        printf("%d \n", fibo(i));
    }
    return 0;
}