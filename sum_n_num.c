// to print thr sum of n natural numbers and also print them in reverse
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number upto which to find the sum: ");
    scanf("%d", &n);
    int sum = 0;
    printf("Number in reverse order \n");
    for (int i = n; i >= 1; i--)
    {
        sum = sum + i;
        printf("%d \n", i);
    }
    printf("sum of %d natural numbers is %d \n", n, sum);
    return 0;
}