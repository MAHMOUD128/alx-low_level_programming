#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * main - adds positive nums
  * @argc: count of args
  * @argv: array of pointer to the strings
  *
  * Return: exit status
  */
int main(int argc, char *argv[])
{
	int sum = 0, i = 1;
	char *arg;

	argc--;
	while (argc--)
	{
		arg = argv[i];
		while (*arg != '\0')
		{
			if (!isdigit(*arg))
			{
				printf("Error\n");
				return (1);
			}
			arg++;
		}
		sum += atoi(argv[i]) > 0 ? atoi(argv[i]) : 0;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
