#include <stdio.h>

/**
 * main - Entry Point
 *
 *Return: Always 0 (success)
 */

int main(void)
{
char lowApha;

for (lowApha = 'a'; lowApha <= 'z'; lowApha++)
{
if (lowApha != 'e' && lowApha != 'q')
putchar(lowApha);
}
putchar ('\n');
return (0);
}
