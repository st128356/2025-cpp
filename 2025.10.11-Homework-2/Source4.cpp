#include<cstdio>

int main(int argc, char** argv)
{
    int a1 = 0;
    int b1 = 0;
    int c1 = 0;
    int a2 = 0;
    int b2 = 0;
    int c2 = 0;

    scanf("%d %d %d", &a1, &b1, &c1);
    scanf("%d %d %d", &a2, &b2, &c2);

    int x = a1;
    int y = b1;
    int z = c1;
    int temp;

    if (x > y)
    {
        temp = x;
        x = y;
        y = temp;
    }
    if (y > z)
    {
        temp = y;
        y = z;
        z = temp;
    }
    if (x > y)
    {
        temp = x;
        x = y;
        y = temp;
    }

    int x2 = a2;
    int y2 = b2;
    int z2 = c2;

    if (x2 > y2)
    {
        temp = x2;
        x2 = y2;
        y2 = temp;

    }
    if (y2 > c2)
    {
        temp = y2;
        y2 = z2;
        z2 = temp;

    }
    if (x2 > y2)
    {
        temp = x2;
        x2 = y2;
        y2 = temp;

    }

    if (x == x2 && y == y2 && z == z2)
    {
        printf("Boxes are equal");
    }
    else if (x <= x2 && y <= y2 && z <= z2)
    {
        printf("The first box is smaller than the second one");
    }
    else if (x >= x2 && y >= y2 && z >= z2)
    {
        printf("The first box is larger than the second one");
    }
    else
    {
        printf("Boxes are incomparable");
    }

    return 0;
}