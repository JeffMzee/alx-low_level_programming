#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars
 *@size : is the size of the array (malloc)
 *@c : A character to initialize the array
 *
 * Return: Pointer to the array or NULL if it fail
 */

char *create_array(unsigned int size, char c)
{
	char *array0fChar;
	unsigned int i = 0;

	array0fChar = malloc(size  * sizeof(char));

	if (array0fChar == 0 || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array0fChar[i] = c;
	}

	return (array0fChar);
}
