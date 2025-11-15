#include <stdio.h>

double fast_power(double a, int n);

int main(int argc, char** argv) 
{
    double a;
    int n;

    scanf("%lf %d", &a, &n);

    double result = fast_power(a, n);

    printf("%.6f", result);

    return 0;
}

double fast_power(double a, int n)
{
    if (n == 0)
    {
        return 1.0;
    }

    double result = 1.0;
    double b = a;
    int c = n;

    while (c > 0)
    {
        if (c % 2 == 1)
        {
            result *= b;
        }
        b *= b;
        c /= 2;
    }

    return result;
}