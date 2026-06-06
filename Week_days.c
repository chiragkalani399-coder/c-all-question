// to print week days using switch case
#include <stdio.h>
int main()
{
    int day;
    printf("Enter day(1-7): ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Monday \n");
        break;
    case 2:
        printf("Tuesday \n");
        break;
    case 3:
        printf("Wednesday \n");
        break;
    case 4:
        printf("thursday \n");
        break;
    case 5:
        printf("friday \n");
        break;
    case 6:
        printf("saturday");
        break;
    case 7:
        printf("sunday");
        break;
    default:
        printf("Invalid day number \n ");
    }
    return 0;
}