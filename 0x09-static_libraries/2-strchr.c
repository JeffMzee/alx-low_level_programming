#include "main.h"

/**
 * *_strchr - fills mem with a constant byte.
 * @s: *p -> const
 * @c: const
 * Return: stuff
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'  ; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
