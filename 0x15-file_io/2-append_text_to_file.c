#include "main.h"

/**
 * append_text_to_file- func that appends text at end of file
 * @filename: name of file
 * @text_content: NULL terminated string
 * Return: 1 (Success) 0 (Failure), 1 (text_content = NULL), -1 (no file)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, l = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (l = 0; text_content[l]; l++)
		{}
	}
	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, l);
	if (op == -1 || wr == -1)
		return (-1);
	close(op);
	return (1);
}
