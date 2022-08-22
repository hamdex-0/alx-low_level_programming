#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * _strlen - Returns the length of a string.
 * @s: The string whose the length will be returned.
 * Return: The length of s.
 */
int _strlen(char *s)
{
	if (*s == 0)
		return (0);
	else
		return (1 + _strlen(s + 1));
}


/**
 * append_text_to_file - Appends a text at the end of a file.
 * @filename: The filename
 * @text_content: The content to append.
 * Return: 1 on success. -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t wlen;

	fd = open(filename, O_WRONLY | O_APPEND | O_EXCL);
	if (fd == -1)
		return (-1);
	len = _strlen(text_content);
	wlen = write(fd, text_content, len);
	close(fd);
	if (wlen != len)
		return (-1);
	return (1);
}
