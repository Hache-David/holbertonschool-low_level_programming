#include <stdlib.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file - create and write on it .
 *
 * @text_content: the text write on the file.
 * @filename: name of the file.
 *
 * Return: 1 if success, -1 if error.
 */

int create_file(const char *filename, char *text_content)
{
	int descripteur, check_error;
	int length = 0;

	if (filename == NULL)
		return (-1);
	while (text_content[length])
		length++;
	descripteur = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (descripteur == -1)
		return (-1);
	if (text_content != NULL)
		check_error = write(descripteur, text_content, length);
	if (check_error == -1)
		return (-1);
	close(descripteur);
	return (1);
}
