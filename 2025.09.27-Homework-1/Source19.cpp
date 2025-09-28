#include<cstdio>

int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    int c = (a % b == 0) || (b % a == 0);
    printf("%s", c ? "1" : "666");
    return 0;
}