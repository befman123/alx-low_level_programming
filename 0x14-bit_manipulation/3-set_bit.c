/**
 * set_bit - sets the bit value of an integer
 * @n: the number
 * @index: the index at wich the bit value is needed
 *
 * Return: the bit value 0 or 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
		return (-1);
	*n |= 1UL << index;
	return (1);
}
