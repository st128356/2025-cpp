#include <stdio.h>

unsigned char ChangeCase(unsigned char c) 
{
    if (c >= 'a' && c <= 'z') 
    {
    
        return c - ('a' - 'A');
    }
    
    else if (c >= 'A' && c <= 'Z') 
    {
    
        return c + ('a' - 'A');
    }
    
    return c;
}

int main(int argc, char** argv) 
{
    unsigned char c;

    scanf("%c", &c);

    unsigned char result = ChangeCase(c);

    printf("%c", result);

    return 0;
}