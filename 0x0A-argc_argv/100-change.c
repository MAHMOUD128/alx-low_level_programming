#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints min num of coins
  * @argc: count of args
  * @argv: array of pointer to the strings
  *
  * Return: exit status
  */
int main(int argc, char *argv[])
{
	int cents = 0, coin25 = 0, coin10 = 0, coin5 = 0, coin2 = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		if (atoi(argv[1]) < 0)
		{
			printf("0\n");
		}
		else
		{
			cents = atoi(argv[1]);
			coin25 = cents / 25;
			cents -= coin25 * 25;
			coin10 = cents / 10;
			cents -= coin10 * 10;
			coin5 = cents / 5;
			cents -= coin5 * 5;
			coin2 = cents / 2;
			cents -= coin2 * 2;
			printf("%d\n", coin25 + coin10 + coin5 + coin2 + cents);
		}
		return (0);
	}
}
