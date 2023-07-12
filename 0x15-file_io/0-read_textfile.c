#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * read_textfile -  reads a text file and prints it to the POSIX STDOT
 * @filename: the file to be opened
 * @letters: characters to read in the file
 * Return: the actual number of letters it could read and print
 * *if the file can not be opened or read, return 0
 * *if filename is NULL return 0
 * *if write fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	size_t byte_reading, byte_writing;
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

	byte_reading = fread(buffer, sizeof(char), letters, fp);

	if (byte_reading == 0)
	{
		free(buffer);
		fclose(fp);
		return (0);
	}

	byte_writing = fwrite(buffer, sizeof(char), byte_reading, stdout);

	if (byte_writing != byte_reading)
	{
		free(buffer);
		fclose(fp);
		return (0);
	}

	free(buffer);
	fclose(fp);

	return (byte_writing);
}
