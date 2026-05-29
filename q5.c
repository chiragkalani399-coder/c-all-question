#include <stdio.h>
int main()
{
    int cents;
    printf("enter the amount in cents: ");
    scanf("%d", &cents);

    int dollar, quarter, dime, nickel, penny;
    int other;

    dollar = cents / 100;
    other = cents - dollar * 100;

    quarter = other / 25;
    other = other - quarter * 25;

    dime = other / 10;
    other = other - dime * 10;

    nickel = other / 5;
    other = other - nickel * 5;

    printf("%d dollar \n", dollar);
    printf("%d quarter \n", quarter);
    printf("%d dime \n", dime);
    printf("%d nickel \n", nickel);
    printf("%d penny \n", other);

    return 0;
}