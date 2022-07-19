#include <stddef.h>
#include "lists.h"
/*
 *Print the number of elements in a linked list
 */size_t listint_len(const listint_t *h)
{
	int i;

	i = 0;
	if (h == NULL)
		return (0);
	if (h->next != NULL)
	{
		i++;
		i += listint_len(h->next);
	}
	return (i);
}
