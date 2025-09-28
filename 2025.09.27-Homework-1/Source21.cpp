#include<cstdio>

int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    int c = a * b;
    int d = 109;
    int e = (c % d + d) % d + 1;
    printf("%d", e);
    return 0;
}