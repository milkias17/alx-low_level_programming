#include "main.h"
#include <stdio.h>

/**
	* read_textfile - reads a text file and prints it to stdout
	* @filename: filename of file to read from
	* @letters: number of letters to print from file
	* Description: reads a text file and prints it to stdout
	* Return: ssize_t
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fd;
	ssize_t readLetters;
	size_t writtenLetters;
	size_t f = -1;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buf = malloc(letters + 1);
	readLetters = read(fd, buf, letters);
	buf[letters] = '\0';

	if (readLetters == -1)
	{
		return (0);
	}

	close(fd);

	writtenLetters = write(1, buf, letters);

	if (writtenLetters == f || writtenLetters != letters)
	{
		return (0);
	}

	free(buf);
	return (readLetters);
}
