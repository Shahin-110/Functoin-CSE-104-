
#include <stdio.h>
int isVowel(char ch)
{
    ch = tolower(ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
char getCharacter()
{
    char character;
    printf("Enter a character: ");
    scanf(" %c", &character);
    return character;
}
int main()
{
    char character = getCharacter();
    if (isVowel(character))
    {
        printf("Vowel\n", character);
    }
    else
    {
        printf("Consonant\n", character);
    }
    return 0;
}
