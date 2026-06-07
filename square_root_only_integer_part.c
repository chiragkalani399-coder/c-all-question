// a fxn to find only integer part of the square root of a number
#include <stdio.h>
float root(int n)
{
    float root = 1;
    for (int i = 1; i * i <= n; i++)
    {
        root = i;
    }
    return root;
}
int main()
{
    float n;
    printf("Enter number: ");
    scanf("%f", &n);

    printf("square root of %f is %f", n, root(n));
    return 0;
}