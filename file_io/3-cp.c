#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

/**
 * main - copies the content of a file to another file
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: 0 on success, exits with code on error
 */
int main(int ac, char **av)
{
	int file_from, file_to, length_buffer, checkexit;
	char buffer[1024];

	if (ac != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		close(file_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	while ((length_buffer = read(file_from, buffer, 1024)) > 0)
		write(file_to, buffer, length_buffer);

	checkexit = close(file_from);
	if (checkexit == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	checkexit = close(file_to);
	if (checkexit == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
