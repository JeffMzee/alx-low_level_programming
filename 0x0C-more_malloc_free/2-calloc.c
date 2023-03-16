#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: no of elements
 * @size: bytesize(arrays)
 * Return: stuff
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (!mem)
		return (NULL);

	filler = mem;

	for (i = 0; i < (size * nmemb); i++)
		filler[i] = '\0';

	return (mem);
}
