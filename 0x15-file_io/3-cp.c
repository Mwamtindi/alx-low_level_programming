#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *cpy_buff_create(char *fe);
void cpy_file_close(int fide);

/**
 * cpy_buff_create - fxt to allocates 1024 bytes for the buffer.
 * @fe: name of buffer file where characters are stored
 * if can't create or if wrote fails, exit with code 99 and print
 * "Error: Can't write to NAME_OF_THE_FILE"
 * Return: allocated buffer.
 */
char *cpy_buff_create(char *fe)
{
	char *bffr;

	bffr = malloc(sizeof(char) * 1024);

	if (bffr == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %d\n", fe);
		exit(99);
	}

	return (bffr);
}

/**
 * cpy_file_close - fxn to close the file descriptors
 * @fide: the file descriptor
 * if can't close a file desc, exit with code 100 and print
 * "Error: Can't close fd FD_VALUE"
 */
void cpy_file_close(int fide)
{
	int tx;

	tx = close(fide);

	if (tx == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fide);
		exit(100);
	}
}

/**
 * main - fxn to copy the contents of a file to another file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success.
 * if argument count is not correct, exit with code 97 and print
 * "Usage: cp file_from file_to"
 * if file_from does not exist or cannot be read, exit with code 98 and print
 * "Error: Can't read from file"
 * if file_to cannot be created or written to, exit with code 99 and print
 * "Error: Can't write to"
 */
int main(int argc, char *argv[])
{
	int bgn, nd, rd, wr;
	char *bffr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	bffr = cpy_buff_create(argv[2]);
	bgn = open(argv[1], O_RDONLY);
	rd = read(bgn, bffr, 1024);
	nd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (bgn == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(bffr);
			exit(98);
		}

		wr = write(nd, bffr, rd);
		if (nd == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(bffr);
			exit(99);
		}

		rd = read(bgn, bffr, 1024);
		nd = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(bffr);
	close_file(bgn);
	close_file(nd);

	return (0);
}

