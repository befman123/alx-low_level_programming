#include "main.h"
/**
 * malloc_checked - allocates memory like malloc
 * @b: The amount of memory allocated
 *
 *
 * Return: a void pointer on success or exits with code 98
 *         on failure
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
