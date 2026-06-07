#include <stdio.h>

double nthRoot(double x, int n)
{
    double guess = x;

    for (int i = 0; i < 30; i++)
    {
        double temp = 1;

        for (int j = 1; j < n; j++)
            temp *= guess;

        guess = ((n - 1) * guess + x / temp) / n;
    }

    return guess;
}

double power(double base, double exp)
{

    if (exp == (int)exp)
    {
        int e = (int)exp;
        double result = 1;

        if (e >= 0)
        {
            for (int i = 0; i < e; i++)
                result *= base;
        }
        else
        {
            for (int i = 0; i < -e; i++)
                result *= base;

            result = 1.0 / result;
        }

        return result;
    }

    if (exp == 0.5)
        return nthRoot(base, 2);

    if (exp == 1.0 / 3.0)
        return nthRoot(base, 3);

    return -1;
}

int main()
{
    printf("%lf\n", power(2, 3));
    printf("%lf\n", power(2, -3));
    printf("%lf\n", power(9, 0.5));
    printf("%lf\n", power(27, 1.0 / 3));

    return 0;
}