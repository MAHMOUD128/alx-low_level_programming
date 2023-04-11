#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * wordsCounter - count words in str
  * @str: str to be computed
  *
  * Return: num of words
  */
int wordsCounter(char *str)
{
	int words = 0;

	if (*str != ' ')
		words++;
	str++;
	while (*str != '\0')
	{
		if (*str != ' ' && *(str - 1) == ' ')
			words++;
		str++;
	}
	return (words);
}

/**
  * free_array - free allocated array
  * @array: pointer to pointer of char
  * @size: size of array
  */
void free_array(char **array, int size)
{
	while (size--)
		free(array[size]);
	free(array);
}

/**
  * strtow - splits str into words
  * @str: str to be splitted
  *
  * Return: pointer to array of str, NULL if str = NULL or str = "" or it fails
  */
char **strtow(char *str)
{
	char *strcpy = str, **wordsArray;
	int words = 1, len, wordIndex = 0, i;

	if (str == (void *)'\0' || *str == '\0')
		return ((void *)'\0');
	words += wordsCounter(str);
	if (words == 1)
		return ((void *)'\0');
	wordsArray = (char **)malloc(words * sizeof(char *));
	if (wordsArray != (void *)'\0')
	{
		strcpy = str;
		while (*strcpy != '\0')
		{
			len = 0;
			if (*strcpy != ' ')
			{
				while (*(strcpy + len) != ' ' && strcpy[len] != '\0')
					len++;
				wordsArray[wordIndex] = (char *)malloc
					((len + 1) * sizeof(char));
				if (wordsArray[wordIndex] == (void *)'\0')
				{
					free_array(wordsArray, wordIndex);
					return ((void *)'\0');
				}
				for (i = 0; i < len; i++)
				{
					wordsArray[wordIndex][i] = *strcpy;
					if (i < len - 1)
						strcpy++;
				}
				wordsArray[wordIndex][len] = '\0';
				wordIndex++;
			}
			strcpy++;
		}
		wordsArray[wordIndex] = (void *)'\0';
	}
	return (wordsArray);
}
