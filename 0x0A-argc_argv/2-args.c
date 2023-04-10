#include <stdio.h>

/**
  * main - prints argv
  * @argc: count of args
  * @argv: array of pointer to the strings
  *
  * Return: exit status
  */
int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
