#include "main.h"

/**
  * _strstr - locates a substr
  * @haystack: st
  * @needle: substr
  *
  * Return: pointer to substr, or NULL if it is not found
  */
char *_strstr(char *haystack, char *needle)
{
	char *needlecpy = needle, *haystackcpy = haystack;

	while (*haystack != '\0')
	{
		needlecpy = needle;
		haystackcpy = haystack;
		while (*needlecpy != '\0')
		{
			if (*needlecpy != *haystackcpy)
			{
				break;
			}
			needlecpy++;
			haystackcpy++;
		}
		if (*needlecpy == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return ((void *)'\0');
}
