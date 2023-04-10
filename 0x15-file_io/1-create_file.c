#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - a fxn that creates a file
 * @filename: name of the file to be created
 * @text_content: a NULL terminated string to write to the file (filename)
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
		for (siz = 0; text_content[siz])
			siz++;
	}
	/**
	 * open file with flags and store the file desc in ap
	 * write the string to the file and store num of bytes
	 */
	ap = open(filename, O_CREATE | O_RDWR | O_TRUNC, 0600);
	tf = write(ap, text_content, siz);

	if (ap == -1 || tf == -1)
		return (-1);

	close(ap);

	return (1);
}
