#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) 
{
    int n = 0;
    scanf_s("%d", &n);

    long* arr = (long*)malloc(n * sizeof(long));

    if (arr == NULL)
    {
        return 1;
    }

    int i = 0;
    for (i = 0; i < n; i++) 
    {
        scanf_s("%ld", &arr[i]);
    }

    int count = 0;
    int j = 0;
    for (j = 0; j < (n - 1); j++) 
    {
        if (((arr[j] > 0) && (arr[j + 1] > 0)) || ((arr[j] < 0) && (arr[j + 1] < 0)))
        {
            count++;
            break;
        }
    }

    if (count)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    free(arr);
    return 0;
}