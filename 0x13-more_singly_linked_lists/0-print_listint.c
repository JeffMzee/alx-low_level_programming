#include "listings.h"

/**
 * print_listint - Prints the elements of a linked list
 * @h: Pointer to the head node of the linked list
 *
 * Return: Number of nodes in the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t nbr_nodes = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		int n = current->n;

		if (n < 0)
		{
			_putchar('-');
			n = -n;
		}

		if (n / 10)
			print_number(n / 10);

		_putchar((n % 10) + '0');
		_putchar('\n');

		current = current->next;
		nbr_nodes++;
	}

	return (nbr_nodes);
}

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 *
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}
