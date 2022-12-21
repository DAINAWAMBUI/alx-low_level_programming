#include "main.h"
#include <unistd.h>


/**
 * _putchar - writes the character to stdout
 * @c: the character to print
 *
 * Return: On succes 1.
 * On error, -1 is returned, nd errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
