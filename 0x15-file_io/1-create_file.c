#include "main.h"

/**
 * create_file - funtion that creates a file
 * @filename: name of the file
 * @text_content: content to be written in the file
 * Return: 1 on succes, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int letters = 0;
	int write_in = 0;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (fd);
	}
	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++);
		write_in = write(fd, text_content, letters);
		if (write_in != letters)
		{
			return (-1);
		}
	}
	close(fd);
	return (1);
}
