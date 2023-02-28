#include<stdio.h>

void main()
{
    char alph;
    printf("Enter alphabet: ");
    scanf(" %c",&alph);

    if ((alph >= 'a' && alph <= 'z') || (alph >= 'A' && alph <= 'Z'))
    {
        printf("The character is alphabet");
    }
    else
    {
        printf("The character is not alphabet");
    }
}