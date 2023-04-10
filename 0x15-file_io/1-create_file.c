#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - a fxn that creates a file
 * @filename: name of the file to be created
 * @text_content: a NULL terminated string to write to the file (filename)
 * file must have those permissions: rw-------. If the file alrwady exists,
 * do not change the permissions
 * Return: 1 on success creation
 *        -1 if fxn fails ie file can not be created, can't be written,
 *        "write" fails, etc... or filename is NULL.
 */

int create_file(const char *filename, char *text_content)
{
	int ap, tf, siz = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[siz])
			siz++;
	}
	ap = open(filename, O_CREATE | O_RDWR | O_TRUNC, 0600); /* open file */
	tf = write(ap, text_content, siz); /* write the string */

	if (ap == -1 || tf == -1)
		return (-1);

	close(ap);

	return (1);
}
