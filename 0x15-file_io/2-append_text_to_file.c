#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "main.h"

/**
  * append_text_to_file - appends text at the end of a file
  * f as file descriptor
  * @filename: the name of the file
  * @text_content: the content of the file
  * Return: 1 on success and -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	ssize_t bw;

	if (!filename)
	{
		return (-1);
	}
	f = open(filename, O_WRONLY | O_APPEND);
	if  (f == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		bw = write(f, text_content, strlen(text_content));
		if (bw == -1)
		{
			close(f);
			return (-1);
		}
	}
	close(f);
	return (1);
}

