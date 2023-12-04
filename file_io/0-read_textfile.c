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
	int descripteur1, r_string;
	size_t nbre_bytes = 0;
	void *str;

	if (filename == NULL)
		return (0);
	str = malloc(letters);
	if (str == NULL)
		return (0);
	descripteur1 = open(filename, O_RDONLY);
	if (descripteur1 == -1)
	{
		free(str);
		return (0);
	}
	nbre_bytes = read(descripteur1, str, letters);
	if (nbre_bytes == 0)
	{
		free(str);
		close(descripteur1);
		return (0);
	}
	r_string = write(STDOUT_FILENO, str, nbre_bytes);
	if (r_string == -1)
	{
		free(str);
		close(descripteur1);
		return (0);
	}
	if (nbre_bytes < letters)
	{
		write(1, "\n", 1);
		nbre_bytes++;
	}
	close(descripteur1);
	free(str);
	return (nbre_bytes);
}
