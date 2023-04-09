#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"

/**
  * create_file - create , write, and truncate a file when necessary
  * file as file descriptor
  * @filename: as name of the file to create
  * @text_content: as content of the file
  * Return: 1 for success and -1 for failure
  */

int create_file(const char *filename, char *text_content)
{
	int file;

	if (filename == NULL)
	{
		return (-1);
	}
	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		if (write(file, text_content, strlen(text_content)) == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
