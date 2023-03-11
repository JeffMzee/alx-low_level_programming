#include "main.h"

/**
 * _strlen - len(str)
 * @s: *p -> str
 * Return: stuff
*/

int _strlen(char *s)
{
int i = 0;
while (s[i])
	i++;

return (i);
}
