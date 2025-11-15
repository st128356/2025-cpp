#include <stdio.h>

double power(double a, int n);

int main(int argc, char** argv) 
{
    double a;
    int n;

    scanf("%lf %d", &a, &n);

    printf("%.15g", power(a, n));

    return 0;
}

double power(double a, int n)
{
    double result = 1.0;

    for (int i = 0; i < n; i++) {
        result *= a;
    }

    return result;
}