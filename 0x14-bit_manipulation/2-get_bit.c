#include "main.h"
/**
 * get_bit - gets the value of a bit at a given ined
 * @n: bit
 * @index: index to get the value at - indices start at 0
 * Return: -1 if an array
 * or the value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	
	if ((n & (1 << index)) == 0)
	return (-1);
	
	return (1);
}	
