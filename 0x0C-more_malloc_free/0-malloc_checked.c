#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: n bytes
 * Return: *p -> (allocated memory)
 */

void *malloc_checked(unsigned int b)
{
	void *allocMemo = malloc(b);

	if (!allocMemo)
	{
		exit(98);
	}

	return (allocMemo);
}
