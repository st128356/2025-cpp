#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char str[]) 
{
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) 
    {
        if (str[left] != str[right]) 
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main(int argc, char** argv) 
{
    char str[1000];

    scanf("%s", str);

    if (isPalindrome(str)) 
    {
        printf("yes");
    }
    else 
    {
        printf("no");
    }

    return 0;
}