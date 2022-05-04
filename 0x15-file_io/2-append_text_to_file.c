#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

/**
	* _strlen - gets the length of a string
	* @str: string to get the length of
	* Description: gets the length of a string
	* Return: int
*/
int _strlen(char *str)
{
	if (str[0] == '\0')
		return (0);

	return (1 + _strlen(str + 1));
}

/**
	* append_text_to_file - appends text at the end of a file
	* @filename: name of file to append to
	* @text_content: text to append to file
	* Description: appends text at the end of a file
	* Return: int
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t contentLength;
	ssize_t writtenBytes;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);

	if (text_content == NULL)
	{
		if (fd != -1)
		{
			return (1);
		}
		return (-1);
	}

	if (fd == -1)
		return (-1);

	contentLength = _strlen(text_content);
	writtenBytes = write(fd, text_content, contentLength);

	if (writtenBytes == -1)
	{
		return (-1);
	}

	close(fd);
	return (1);
}
