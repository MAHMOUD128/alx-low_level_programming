#include "main.h"

/**
 * rev_string - reverses a string
 * @param s : string to be reversed
 * @return : void
 */
 
void rev_string(char *s)
{
    int i, j;
    char temp;

    for (i = 0; s[i] != '\0'; i++)
    {
        ;
    }
    i--;
    for (j = 0; j < i; j++)
    {
        temp = s[j];
        s[j] = s[i];
        s[i] = temp;
        i--;
    }
}
