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
	int fd, printed_char = 0;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	fd = open(filename, O_RDONLY);

	read(fd, buffer, letters);
	close(fd);
	for (printed_char = 0 ; buffer[printed_char] != '\0' ; printed_char++)
	;

	write(1, buffer, printed_char);

	free(buffer);
	return (printed_char);
}
