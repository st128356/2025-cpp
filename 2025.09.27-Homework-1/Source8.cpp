#include<cstdio>

int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    int c = (a < 2 * b); //Vanya
    int d = (a >= 2 * b) && (a < 3 * b); //Den
    int e = (a >= 3 * b); //Vanya
    printf("%s", c ? "Ivan" : (d ? "Denis" : "Ivan"));
    return 0;
}