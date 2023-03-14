#include "main.h"

/**
 * _puts - puts string
 * @str: *p -> str
 * Return: stuff
*/

void _puts(char *str)
{
int i = 0;
while (str[i])
{
	_putchar(str[i]);
	i++;
}
_putchar('\n');
}
