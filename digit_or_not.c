// to check if a character is digit or not
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character to check: ");
    scanf("%c", &ch);
    if (ch >= '0' && ch <= '9')
    {
        printf(" %c is a digit type character", ch);
    }
    else
    {
        printf(" %c is not a digit type character", ch);
    }
    return 0;
}