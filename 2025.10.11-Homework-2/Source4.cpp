#include<cstdio>

int main(int argc, char** argv)
{
    int A1 = 0;
    int B1 = 0;
    int C1 = 0;
    int A2 = 0;
    int B2 = 0;
    int C2 = 0;

    scanf("%d %d %d", &A1, &B1, &C1);
    scanf("%d %d %d", &A2, &B2, &C2);

    int a1 = A1;
    int b1 = B1;
    int c1 = C1;
    int temp;

    if (a1 > b1)
    {
        temp = a1;
        a1 = b1;
        b1 = temp;
    }
    if (b1 > c1)
    {
        temp = b1;
        b1 = c1;
        c1 = temp;
    }
    if (a1 > b1)
    {
        temp = a1;
        a1 = b1;
        b1 = temp;

    }

    int a2 = A2;
    int b2 = B2;
    int c2 = C2;

    if (a2 > b2)
    {
        temp = a2;
        a2 = b2;
        b2 = temp;

    }
    if (b2 > c2)
    {
        temp = b2;
        b2 = c2;
        c2 = temp;

    }
    if (a2 > b2)
    {
        temp = a2;
        a2 = b2;
        b2 = temp;

    }

    if (a1 == a2 && b1 == b2 && c1 == c2)
    {
        printf("Boxes are equal");
    }
    else if (a1 <= a2 && b1 <= b2 && c1 <= c2)
    {
        printf("The first box is smaller than the second one");
    }
    else if (a1 >= a2 && b1 >= b2 && c1 >= c2)
    {
        printf("The first box is larger than the second one");
    }
    else
    {
        printf("Boxes are incomparable");
    }

    return 0;
}