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
    for (j = 0; j < (n / 2); j++) 
    {
        int temp = arr[j];
        arr[j] = arr[n - j - 1];
        arr[n - j - 1] = temp;
    }

    int k = 0;
    for (k = 0; k < n; k++)
    {
        printf("%ld", arr[k]);
        if (k < n - 1)
        {
            printf(" ");
        }
    }

    free(arr);
    return 0;
}