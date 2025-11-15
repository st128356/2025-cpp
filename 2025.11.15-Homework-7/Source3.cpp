#include <stdio.h>

bool Election(bool x, bool y, bool z);

int main(int argc, char** argv) 
{
    int x, y, z;

    scanf("%d %d %d", &x, &y, &z);

    bool result = Election((bool)x, (bool)y, (bool)z);

    printf("%d", result);

    return 0;
}

bool Election(bool x, bool y, bool z)
{
    int count_true = 0;
    if (x) count_true++;
    if (y) count_true++;
    if (z) count_true++;

    return (count_true >= 2);
}