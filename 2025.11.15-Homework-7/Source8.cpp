#include <stdio.h>

int f(int n, int k);

int main(int argc, char** argv) 
{
    int n, k;

    scanf("%d %d", &n, &k);

    printf("%d", f(n, k));

    return 0;
}

int f(int n, int k)
{
    if (k == 0 || k == n)
    {
        return 1;
    }
    return f(n - 1, k - 1) + f(n - 1, k);
}