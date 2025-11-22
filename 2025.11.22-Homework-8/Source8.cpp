#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) 
{
    char str[1000];

    scanf("%s", str);

    int count[256] = { 0 };

    for (int i = 0; str[i] != '\0'; i++) 
    {
        count[(unsigned char)str[i]]++;
    }

    for (int i = 0; i < 256; i++) 
    {
        if (count[i] == 2) 
        {
            printf("%c", (char)i);
            break;
        }
    }

    return 0;
}