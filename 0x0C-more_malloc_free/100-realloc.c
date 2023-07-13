#include "main.h"
#include <stdlib>
#include <stdio.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: is a pointer to the memory previously allocated
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char np;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		np = malloc(new_size);
		if (np == NULL)
			return (NULL);
		return (np);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	np = malloc(new_size);
	if (np == NULL)
		return (NULL);
	for (i = 0; i < old_size && i < new_size; i++)
	{
		np[i] = ((char *) ptr)[i];
	}
	free(ptr);
	return (np);
}
