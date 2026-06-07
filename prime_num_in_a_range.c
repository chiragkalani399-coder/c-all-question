// to print prime number ina range
#include <stdio.h>
int main()
{
    int start;
    printf("Enter lower range: ");
    scanf("%d", &start);
    int end;
    printf("Enter higher range: ");
    scanf("%d", &end);
    for (int i = start; i <= end; i++)
    {
        int count = 0;
        if (i == 1)
        {
            continue;
        }
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            printf("%d \n", i);
        }
    }
}