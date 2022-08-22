#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - Reads a textfile and prints it to the POSIX standard output.
 * @filename: The filename.
 * @letters: The number of letters to read and print.
 * Return: The actual number of letters it could read and print if everything
 *	   runs well. 0 otherwise.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd, tmp = 1;
	size_t read_size = 0;

	printf("la taille est %ld", letters);
	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(letters * sizeof(char));
	buffer[letters] = '\0';
	do {
		tmp = read(fd, buffer, letters);
		read_size += tmp;
	} while (tmp);
	close(fd);
	if (read_size != letters)
		return (0);
	write(1, buffer, letters);
	return (read_size);
}
