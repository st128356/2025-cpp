#include<cstdio>

int main(int argc, char** argv)
{
    long long a = 0;
    long long b = 0;
    scanf("%lld", &a);
    b = (a + 1) / 2;
    printf("%lld", b * b);
    return 0;
}