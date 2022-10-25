#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 *
 * @h: pointer to the head of the list
 * Return: the number of nodes printed
 **/

size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;
	const listint_t *node_ptr = h;

	while (node_ptr)
	{
		printf("%d\n", node_ptr->n);
		node_ptr = node_ptr->next;
		node_count++;
	}

	return (node_count);

}
