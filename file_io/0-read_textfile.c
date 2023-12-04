#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * read_textfile - return the number of character and print the file.
 *
 * @filename: the treated file.
 * @letters: the numbers of expected char.
 *
 * Return: the number of character or -1 if failed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int descripteur1, descripteur2;
	ssize_t nbre_bytes = 0;
	char *str;

	if (filename == NULL)
		return (STDERR_FILENO);
	str = malloc(sizeof(char) * (letters + 1));
	if (str == NULL)
		return (STDERR_FILENO);
	descripteur1 = open(filename, O_RDONLY);
	if (descripteur1 == -1)
		return (STDERR_FILENO);
	nbre_bytes = read(descripteur1, str, letters);
	if (nbre_bytes == -1)
	{
		close(descripteur1);
		return (STDERR_FILENO);
	}
	descripteur2 = write(STDOUT_FILENO, str, letters);
	if (descripteur2 == -1)
	{
		close(descripteur1);
		return (STDERR_FILENO);
	}
	close(descripteur1);
	return (nbre_bytes);
}
