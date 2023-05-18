#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * cp -  copies the content of a file to another file
 * @argc: counts the argument of a program
 * @argv:  arraysnof pointer to a char
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int source_file, dest_file, bytes_reading, bytes_writing;
	char buffer[1024];
	const char *file_from = argv[1];
	const char *file_to = argv[2];


	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}

	source_file = open(argv[1], O_RDONLY);
	if (source_file == -1)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	dest_file = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (dest_file == -1)
	{
		fprintf(stderr, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	while ((bytes_reading = read(source_file, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_writing = write(dest_file, buffer, bytes_reading);
		if (bytes_writing != bytes_reading)
		{
			fprintf(stderr, "Error: Can't close file descriptor %s\n", file_to);
			exit(99);
		}
	}

	if (bytes_reading == -1)
	{
		fprintf(stderr, "Error: Can't close file descriptor %s\n", file_from);
		exit(98);
	}

	if (close(source_file) == -1)
	{
		fprintf(stderr, "Error: Can't close file descriptor %d\n", source_file);
		exit(100);
	}

	if (close(dest_file) == -1)
	{
		fprintf(stderr, "Error: Can't close file descriptor %d\n", dest_file);
		exit(100);
	}
	return (0);
}
