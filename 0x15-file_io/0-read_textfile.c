#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - func reads a text file and prints it to the POSIX
 * @filename: constant char
 * @letters: no. of l to be Read & Print
 * Return: Always 0 (Success), if NULL 0, !W 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t f_des, wr, r;

	f_des = open(filename, O_RDONLY);
	if (f_des == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	r = read(f_des, buff, letters);
	wr = write(STDOUT_FILENO, buff, r);

	free(buff);
	close(f_des);
	return (wr);
}
