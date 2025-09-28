#include<cstdio>

int main(int argc, char** argv)
{
    int a = 0;
    scanf("%d", &a);
    int b = a % 10;
    int c = (a / 10) % 10;
    int d = (a / 10) / 10;
    printf("%d", b + c + d);
    return 0;
}