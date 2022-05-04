#include "main.h"

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
	* create_file - creates a file
	* @filename: name of file to create
	* @text_content: content we want new file to contain
	* Description: creates a file
	* Return: int
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	int content_length;
	ssize_t writtenBytes;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		content_length = _strlen(text_content);
		writtenBytes = write(fd, text_content, content_length);

		if (writtenBytes == -1)
		{
			return (-1);
		}

		close(fd);
	}

	return (1);
}
