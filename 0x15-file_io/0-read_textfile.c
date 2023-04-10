#include "main.h"

/**
 * read_textfile - reads text from a file
 * @filename: name of the file
 * @letters: letters to be read
 * Return: number of letters read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	int x;
	int file_to_write_in;

	if (!filename)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buf = malloc(letters);
	x = read(fd, buf, letters);
	if (x == -1)
	{
		free(buf);
		return (0);
	}
	buf[x] = '\0';
	close(fd);
	file_to_write_in = write(STDOUT_FILENO, buf, x);
	if (file_to_write_in == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (file_to_write_in);
}
