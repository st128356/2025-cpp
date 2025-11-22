#include <stdio.h>

unsigned char ToUpper(unsigned char c) 
{
    if (c >= 'a' && c <= 'z') 
    {
        return c - ('a' - 'A');
    }
    return c;
}

int main(int argc, char** argv) 
{
    unsigned char c;

    scanf("%c", &c);

    unsigned char result = ToUpper(c);

    printf("%c", result);

    return 0;
}