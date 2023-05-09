#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * read_textfile -  reads a text file and prints it to the POSIX STDOT
 * @filename: the file to be opened
 * @letters: characters to read in the file
 * Return: the actual number of letters it could read and print
 *	*if the file can not be opened or read, return 0
 *	*if filename is NULL return 0
 *	*if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t bytes_read, bytes_writing;
	FILE *fp;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters);
		if (buffer == NULL)
		return (0);

	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		free(buffer);
		return (0);
	}
	

	bytes_read = fread(buffer, sizeof(char), letters, fp);

	if (bytes_read == 0)
	{
		free(buffer);
		fclose(fp);
		return (0);
	}

	bytes_writing = fwrite(buffer, sizeof(char), bytes_read, stdout);

	if (bytes_writing != bytes_read)
	{
		free(buffer);
		fclose(fp);
		return (0);
	}

	free(buffer);
	fclose(fp);

	return (bytes_writing);
}
