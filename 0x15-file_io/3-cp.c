#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
  * test - tests sys calls
  * @success: fd
  * @code: error code
  * @s: pointer to str
  * @fd: fd
  */
void test(int success, char code, char *s, int fd)
{
	char format98[] = "Error: Can't read from file %s";
	char format99[] = "Error: Can't write to %s";
	char format100[] = "Error: Can't close fd %d";

	if (success < 0)
	{
		switch (code)
		{
			case 98:
			dprintf(STDERR_FILENO, format98, s);
			exit(code);
			break;
			case 99:
			dprintf(STDERR_FILENO, format99, s);
			exit(code);
			break;
			case 100:
			dprintf(STDERR_FILENO, format100, fd);
			exit(code);
		}
	}
}

/**
  * main - copies content of a file to another
  * @argc: count of args
  * @argv: array of pointer to str
  *
  * Return: 0
  */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	else
	{
		int fd_from = open(argv[1], O_RDONLY), i = 0, success;
		int fd_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
		char buffer[1024];

		test(fd_from, 98, argv[1], 0);
		test(fd_to, 99, argv[2], 0);
		buffer[1023] = '\0';
		do {
			if (i == 1023)
			{
				success = write(fd_to, buffer, 1024);
				if (success != 1024)
					test(-1, 99, argv[1], 0);
				i = 0;
			}
			success = read(fd_from, &buffer[i], 1);
			i++;
		} while (success);
		buffer[i] = '\0';
		success = write(fd_to, buffer, i + 1);
		if (success != i + 1)
			test(-1, 99, argv[1], 0);
		success = close(fd_from);
		test(success, 100, (void *)'\0', fd_from);
		success = close(fd_to);
		test(success, 100, (void *)'\0', fd_to);
	}
	return (0);
}
