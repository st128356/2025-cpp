#include<cstdio>

int main(int argc, char** argv)
{

    int n = 0;

    scanf("%d", &n);

    int n1 = n % 10;
    int n2 = (n / 10) % 10;
    int n3 = (n / 100) % 10;
    int n4 = (n / 1000) % 10;
    int n5 = (n / 10000) % 10;
    int n6 = n / 100000;

    int firstsum = n1 + n2 + n3;
    int secondsum = n4 + n5 + n6;

    printf(firstsum == secondsum ? "YES" : "NO");

    return 0;

}