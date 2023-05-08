#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
  * read_textfile - reads a text file nd prints it
  * fd as file descriptor, buf = buffer, br= byte read,  bw= byte wrtie
  * @filename: the name of file
  * @letters: the number of letters to be printed
  * Return: actual number of letters it can read
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t br;
	ssize_t bw;
	char *buf;

	fd = open(filename,  O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	br = read(fd, buf, letters);
	if (br == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	bw = write(STDOUT_FILENO, buf, br);
	if (bw == -1 || bw != br)
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);
	return (br);
}
