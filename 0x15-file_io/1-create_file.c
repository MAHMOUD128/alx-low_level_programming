#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
  * _strlen - computes len of a string
  * @s: string to be checked
  *
  * Return: len of s
  */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	return (i);
}

/**
  * create_file - creates a file
  * @filename: file name
  * @text_content: str
  *
  * Return: 1 on success, -1 otherwise
  */
int create_file(const char *filename, char *text_content)
{
	if (filename)
	{
		int fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
		int len = 0, written = 0;

		if (fd < 0)
		{
			return (-1);
		}
		if (text_content)
		{
			len = _strlen(text_content);
			written = write(fd, text_content, len);
		}
		close(fd);
		if (written < len)
		{
			return (-1);
		}
		return (1);
	}
	else
	{
		return (-1);
	}
}
