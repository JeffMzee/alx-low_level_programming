#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers ordered
 *               from min to max, inclusive.
 * @min: array[0]
 * @max: array[-1]
 * Return: stuff
 */

int *array_range(int min, int max)
{
	int *array, i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (!array)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min++;

	return (array);
}
