#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, bytes_writing;

	if (!filename)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
		return (-1);

	if (text_content)
	{
		bytes_writing = write(fp, text_content, strlen(text_content));
		if (bytes_writing == -1)
		{
			close(fp);
			return (1);
		}
	}
	close(fp);
	return (1);
}

