#include "main.h"
#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - read a text file and prints it to the POSIX standard output
 *
 * @filename: Pointer to the file name
 * @letters: The number of chars in the file
 * Return: The number of letters it could print or
 *			0 if the file can not be opened or read
 */
size_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd;
	ssize_t read_n, write_n;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
		return (0);
	read_n = read(fd, buffer, letters);
	if (read_n == -1)
		return (0);
	write_n = write(STDIN_FILENO, buffer, letters);
	if (write_n == -1)
		return (0);
	return (write_n);
}
