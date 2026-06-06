// to check if the enter character is upper case or lowercase
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is a lowercase character", ch);
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("%c is a uppercase character", ch);
    }
    else
    {
        printf("%c is not an alphabet", ch);
    }
    return 0;
}