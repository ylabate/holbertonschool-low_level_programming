#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, printed_char = 0, checkexit;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	printed_char = read(fd, buffer, letters);
	close(fd);
	if (printed_char == -1)
	{
		free(buffer);
		return (0);
	}
	checkexit = write(STDOUT_FILENO, buffer, printed_char);
	free(buffer);
	if (checkexit == -1 || checkexit != printed_char)
		return (0);

	return (printed_char);
}
