#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * append_text_to_file - fxn that appends text at the end of a file
 * @filename: the name of the file created
 * @text_content: the "NULL" terminated string to add at the end of the file
 * Return: 1 on success and if the file exist
 *         -1 on failure and if file does not exist or
 *         you don't have permissions to write the file.
 */

int append_text_to_file(const char *filename, char *text_content)
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
	 * open file with flags and store file desc in ap
	 * write the string to the file and store numb of bytes
	 */
	ap = open(filename, O_WRONLY | O_APPEND);
	tf = write(ap, text_content, siz);

	if (ap == -1 || tf == -1)
		return (-1);

	close(ap);

	return (1);
}
