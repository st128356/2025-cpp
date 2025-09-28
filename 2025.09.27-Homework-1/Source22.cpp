#include<cstdio>

int main(int argc, char** argv)
{
    long long a = 0;
    long long b = 0;
    scanf("%lld", &a);
    scanf("%lld", &b);
    long long c = a % b;
    long long abs_b = (b > 0) ? b : -b;
    long long d = c + abs_b;
    printf("%lld", (c >= 0) ? c : d);
    return 0;
}