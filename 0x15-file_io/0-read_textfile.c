#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
  * read_textfile - reads a text file and prints it to POSIX stdout
  * @filename: file name
  * @letters: number of letters it should read and print
  *
  * Return: actual number of letters it could read and print
  * 0 if NULL or fail
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int actual_letters = 0;

	if (filename)
	{
		int fd = open(filename, O_RDONLY);
		char *buf;

		if (fd < 0)
		{
			return (0);
		}
		buf = malloc(letters);
		if (!buf)
		{
			return (0);
		}
		actual_letters = read(fd, buf, letters);
		if (actual_letters < 0)
		{
			return (0);
		}
		buf[actual_letters] = '\0';
		actual_letters = write(STDOUT_FILENO, buf, actual_letters);
		free(buf);
		close(fd);
	}
	return (actual_letters > 0 ? (size_t)actual_letters : 0);
}
