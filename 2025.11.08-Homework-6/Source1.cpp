#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) 
{
    int n = 0;
    scanf("%d", &n);

    long* arr = (long*)malloc(n * sizeof(long));

    if (arr == NULL)
    {
        return 1;
    }

    int i = 0;
    for (i = 0; i < n; i++) 
    {
        scanf("%ld", &arr[i]);
    }

    int j = 0;
    for (j = 0; j < n; j += 2) 
    {
        printf("%ld", arr[j]);
        if (j + 2 < n) 
        {
            printf(" ");
        }
    }
    free(arr);
    return 0;
}