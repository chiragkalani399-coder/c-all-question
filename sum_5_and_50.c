// print all the odd number between 5 and 50 . and sum of numbers between 5 and 50(including 5 and 50)
#include <stdio.h>
int main()
{
    int sum = 0;
    for (int i = 6; i < 50; i++)
    {
        sum = sum + i;
        if (i % 2 == 0)
        {
            continue;
        }
        printf("%d \n", i);
    }
    printf("required sum is %d", sum + 5 + 50);
    return 0;
}