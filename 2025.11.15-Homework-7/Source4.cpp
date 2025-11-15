#include <stdio.h>
#include <math.h>

int is_prime(int n);

int main(int argc, char** argv) 
{
    int n;

    scanf("%d", &n);

    if (is_prime(n)) 
    {
        printf("prime");
    }
    else 
    {
        printf("composite");
    }

    return 0;
}

int is_prime(int n)
{
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;

    int limit = sqrt(n);
    for (int i = 3; i <= limit; i += 2)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}