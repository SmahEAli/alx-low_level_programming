#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *create_buff(char *f);
void close_f(int f_des);

/**
 * create_buff- func allocates 1024 bytes for buffer.
 * @f: The name of the file buffer
 * Return: char pointer to new allocation
 */
char *create_buff(char *f)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", f);
		exit(99);
	}

	return (buff);
}
/**
 * close_f- Closes file descriptors.
 * @f_des: The file descriptor to be closed.
 */
void close_f(int f_des)
{
	int cl;

	cl = close(f_des);
	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close f_des %d\n", f_des);
		exit(100);
	}
}
/**
 * main - func to copy contents of file to another file
 * @argc: The number of arguments supplied to the program
 * @argv: An array of pointers to the arguments
 * Return: Always 0 (Success)
 * exit code: 97 (incorrect no. argument), 98 (file !exit | R),
 * 99 (!create | !W), 100 (!close)
 */

int main(int argc, char *argv[])
{
	int f_f, to, r, wr;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = create_buff(argv[2]);
	f_f = open(argv[1], O_RDONLY);
	r = read(f_f, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (f_f == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		wr = write(to, buff, r);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		r = read(f_f, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buff);
	close_f(f_f);
	close_f(to);
	return (0);
}
