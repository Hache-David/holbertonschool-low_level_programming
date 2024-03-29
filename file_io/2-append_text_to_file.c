#include <stdlib.h>
#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * append_text_to_file - write at the end of file if exist .
 *
 * @text_content: the text write on the file.
 * @filename: name of the file.
 *
 * Return: 1 if success, -1 if error.
 */

int append_text_to_file(const char *filename, char *text_content)
{
		int descripteur, check_error;
	int length = 0;

	if (filename == NULL)
		return (-1);

	descripteur = open(filename, O_WRONLY | O_APPEND, 0600);
	if (descripteur == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
		check_error = write(descripteur, text_content, length);
	}
	if (check_error == -1)
		return (-1);
	close(descripteur);
	return (1);
}

