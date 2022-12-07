// WAP to check whether given character is alphabet or digit or special character.

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Checking whether given character is an alphabet
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("%c is an alphabet.", ch);
    }
    // Checking whether given character is a digit
    else if (ch >= '0' && ch <= '9')
    {
        printf("%c is a digit.", ch);
    }
    // Checking whether given character is a special character
    else
    {
        printf("%c is a special character.", ch);
    }
    return 0;
}