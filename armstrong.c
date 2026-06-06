// if the given number is armstrong or not
#include <stdio.h>
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int count = 0;
    int temp = n;
    int digit;
    int sum = 0;
    int product;
    while (temp != 0)
    {
        temp = temp / 10;
        count++;
    }
    temp = n;
    while (temp != 0)
    {
        digit = temp % 10;
        product = 1;
        for (int i = 1; i <= count; i++)
        {
            product = product * digit;
        }
        sum = sum + product;
        temp = temp / 10;
    }
    if (sum == n)
    {
        printf("%d is an armstrong number", n);
    }
    else
    {
        printf("%d is not an armstrong number", n);
    }
    return 0;
}