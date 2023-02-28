#include<stdio.h>

void main()
{
    char alph;
    printf("Enter alphabet: ");
    scanf(" %c",&alph);

    if ((alph >= 'a' && alph <= 'z') || (alph >= 'A' && alph <= 'Z'))
    {
        if (alph == 'a' || alph == 'e' || alph == 'i' || alph == 'o' || alph == 'u')
        {
            printf("The character is Vowel");
        }
        else
        {
            printf("The character is consonant");
        }
    }
    else
    {
        printf("The character is not alphabet");
    }
}