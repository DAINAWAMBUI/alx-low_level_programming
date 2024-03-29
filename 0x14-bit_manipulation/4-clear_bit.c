#include "main.h"
/**
 * clear_bit - sets the value of a bit at a given ined to 1
 * @n: pointer to the bit
 * @index: index to set the value at - indices start at o
 * Return: if an error occurs - -1
 * otherwise - 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n &= ~(1 << index);

	return (1);
}
