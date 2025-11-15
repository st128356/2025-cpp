#include <stdio.h>

int phi(int n);

int main(int argc, char** argv) 
{
    int n;
    scanf("%d", &n);

    int result = phi(n);
    printf("%d", result);

    return 0;
}

int phi(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    int b = 1;
    int c = 1;

    for (int i = 2; i <= n; i++)
    {
        int d = b + c;
        b = c;
        c = d;
    }

    return c;
}