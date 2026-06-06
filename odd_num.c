// keep taking number from the user until it enter a odd number
#include <stdio.h>
int main()
{
    int n;
    for (int i = 0;; i++)
    {
        printf("Enter number: ");
        scanf("%d", &n);
        if (n % 2 != 0)
        {
            break;
        }
    }
    printf("%d is an odd number", n);
    return 0;
}