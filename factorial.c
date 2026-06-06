// factorial of a number.
#include <stdio.h>
int main()
{
    int n;
    printf("enter a number to find its factorial: ");
    scanf("%d", &n);
    if ((scanf("%d", &n) != 1))
    {
        printf("invalid input ! please enter a number \n");
        return 0;
    }
    int fact = 1;
    if (n <= 0)
    {
        printf("please enter a positive non 0 number \n");
        return 0;
    }
    for (int i = n; i >= 1; i--)
    {

        fact = fact * i;
    }
    printf("factorial of the entered number is %d \n", fact);
    return 0;
}