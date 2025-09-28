#include<cstdio>

int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    int c = (a + b - 1) / a;
    int d = (b - 1) % a + 1;
    printf("%d %d", c, d);
    return 0;
}