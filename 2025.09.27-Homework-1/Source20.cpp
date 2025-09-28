#include<cstdio>

int main(int argc, char** argv)
{
    long long a = 0;
    long long b = 0;
    scanf("%lld", &a);
    scanf("%lld", &b);
    long long c = (b / a);
    long long d = (b % a);
    long long e = (a - (b % a)) % a;
    printf("%lld %lld %lld", c, d, e);
    return 0;
}