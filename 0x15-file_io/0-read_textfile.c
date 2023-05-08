#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - a fxn that reads a text file and prints
 *                 it to the POSIX standard output.
 * @letters: number of letters that it should read and print
 * @filename: pointer to the text file to be printed
 * Return: actual number of letters that it could read and print else
 *         0 if filename is NULL, file can't be opened or read and
 *         write fails or does not write the expected amount of bytes.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t wred, tx, txl;

	if (filename == NULL)
		return (0);

	wred = open(filename, O_RDONLY); /* file opened in read only mode */

	buffer = malloc(sizeof(char) * letters); /* allocate buffer */
	if (buffer == NULL)
		return (0);

	/**
	 * read letters into buffer from the file
	 * write the contents into std output
	 */
	tx = read(wred, buffer, letters);
	txl = write(STDOUT_FILENO, buffer, tx);

	if (wred == -1 || tx == -1 || txl == -1 || txl != tx) /* check errors */
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(wred);

	return (txl);
}
