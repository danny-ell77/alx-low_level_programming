#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 *
 * @h: pointer to the head of the list
 * Return: The number of elements in the list 
 **/
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;
        const listint_t *node_ptr = h;

        while (node_ptr)
        {
                node_ptr = node_ptr->next;
                node_count++;
        }

        return (node_count);
	
}
