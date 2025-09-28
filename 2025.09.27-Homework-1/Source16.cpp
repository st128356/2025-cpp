#include<cstdio>

int main(int argc, char** argv)
{
    long long a = 0;
    scanf("%d", &a);
    long long b = a / 10;
    long long c = b % 10;
    printf("%lld", c);
    return 0;
}