#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - locates the index
 * @str: the string
 * Return: the index
 */
int word_len(char *str)
{
	int index = 0, len = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		len++;
		index++;
	}
	return (len);
}

/**
 * count_words - counts the words in string
 * @str: string
 * Return: no. of words in string
 */
int count_words(char *str)
{
	int i = 0, ws = 0, l = 0;

	for (i = 0; *(str + i); i++)
		l++;
	for (i = 0; i < l; i++)
	{
		if (*(str + i) != ' ')
		{
			ws++;
			i += word_len(str + i);
		}
	}
	return (ws);
}
/**
 * strtow - splits string into words
 * @str: the string
 * Return: if str = NULL, "", fails then NULL
 */
char **strtow(char *str)
{
	char **st;
	int i = 0, ws, w, ls, l;

}
