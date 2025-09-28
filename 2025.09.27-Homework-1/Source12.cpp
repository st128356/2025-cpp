#include<cstdio>

int main(int argc, char** argv)
{
    long long a = 0;
    long long b = 0;
    long long c = 0;
    scanf("%lld", &a);
    scanf("%lld", &b);
    c = (a - 1) * (b - 1) + 1;
    printf("%lld", c);
    return 0;
}