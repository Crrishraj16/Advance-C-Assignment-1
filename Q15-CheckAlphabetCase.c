// WAP to check whether character is lower case or upper case.

#include <stdio.h>
int main()
{
    char character;

    printf("Enter a character: ");
    scanf("%c", &character);

    if (character >= 'a' && character <= 'z')
        printf("The character is Lowercase.");

    else if (character >= 'A' && character <= 'Z')
        printf("The character is Uppercase.");
    else

        printf("The character is neither Uppercase nor Lowercase.");
        
    return 0;
}