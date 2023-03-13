#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: str
 * Return: *p -> new string
 */

char *_strdup(char *str)
{
	char *newStr;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);
	i = len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	len++;
	newStr = malloc(len * sizeof(*str));
	if (newStr == NULL)
		return (NULL);
	while (i <= len)
	{
		newStr[i] = str[i];
		i++;
	}
	return (newStr);
}
