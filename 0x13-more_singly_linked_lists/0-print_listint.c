#include <stddef.h>
#include "lists.h"
#include <stdio.h>
/*
 *Print the elements of a linked list
 */size_t print_listint(const listint_t *h)
{
	int i;

	i = 0;
	if (h == NULL)
	{
		return (0);
	}
	printf("%d\n", h->n);
	i++;
	if (h->next != NULL)
	{
		i += print_listint(h->next);
	}
	return (i);
}
