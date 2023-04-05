#include "lists.h"

/**
 * add_nodeint - adds a node to a linked list head
 * @head: linked list head
 * @n: int element of the linked list
 * Return: pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* Allocate memory for the new node */
	listint_t *new_node = malloc(sizeof(listint_t));

	/* Check if allocation was successful */
	if (!new_node)
		return (NULL);

	/* Set the value of the new node */
	new_node->n = n;

	/* Add the new node to the head of the list */
	new_node->next = *head;
	*head = new_node;

	/* Return a pointer to the new node */
	return (new_node);
}
