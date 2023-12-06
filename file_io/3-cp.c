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
	int files_from, empty_folder, bytes_read, bytes_written,
	check_error, check_error2, rd;
	char str[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	files_from = open(argv[1], O_RDONLY);
	if (files_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	empty_folder = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (empty_folder == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	bytes_read = read(files_from, str, 1024);
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(files_from), close(empty_folder), exit(98);
	}
	bytes_written = write(empty_folder, str, bytes_read);
	if (bytes_written == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(files_from), close(empty_folder), exit(99);
	}
	check_error = close(files_from);
	if (check_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", bytes_read);
		close(empty_folder), exit(100);
	}
	check_error2 = close(empty_folder);
	rd = read(empty_folder, str, 1024);
	if (check_error2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", rd), exit(100);
	return (0);
}
