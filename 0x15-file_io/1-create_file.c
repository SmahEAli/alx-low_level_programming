#include "main.h"

/**
 * create_file- func creates file
 * @filename: name of file created
 * @text_content: Null terminated string
 * Return: 1 (Success), 0 (failure)
 */
int create_file(const char *filename, char *text_content)
{
	int f_des, wr, l = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (l = 0; text_content[l]; l++)
		{}
	}
	f_des = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(f_des, text_content, l);
	if (f_des == -1 || wr == -1)
		return (-1);
	close(f_des);
	return (1);
}
