#include "main.h"

/**
 * *_strncpy - len(str)
 * @dest: *p -> str
 * @src: *p
 * @n: int
 * Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];

for ( ; i < n; i++)
	dest[i] = '\0';

return (dest);
}
