#include <stdlib.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

/**
 * main - check the code.
 *
 * @argc: number of arguments.
 * @argv: value of argument.
 *
 * Return: 1 if success, -1 if error.
 */

int main(int argc, char **argv)
{
	int descripteur, empty_folder, bytes_read, bytes_written, check_error;
	char str[1024];

	descripteur = open(argv[1], O_RDONLY);
	if (descripteur == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[2]);
		exit(98);
	}
	empty_folder = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	bytes_read = read(descripteur, str, 1024);
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	bytes_written = write(empty_folder, str, bytes_read);
	if (bytes_written == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	check_error = close(descripteur);
	if (check_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", bytes_read);
		exit(100);
	}
	return (1);
}
