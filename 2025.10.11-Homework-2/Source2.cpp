#include<cstdio>

int main(int argc, char** argv)
{

    char a[7];

    scanf("%6s", &a);

    int firstsum = a[0] + a[1] + a[2];
    int secondsum = a[3] + a[4] + a[5];

    printf(firstsum == secondsum ? "YES" : "NO");

    return 0;

}