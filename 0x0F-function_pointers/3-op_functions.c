#include "3-calc.h"

/**
 * op_add - calculates the sum of two integers
 * @a: fitst integer
 * @b: second integer
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference between a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: difference between a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_div - calculates the division of two integers
 * @a: first integer
 * @b: the second integer
 *
 * Return: division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mul - calculates the multiplacation of two integers
 * @a: first integer
 * @b: the second integer
 *
 * Return: multiplacation of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_mod - calculates the modulus of two integers
 * @a: first integer
 * @b: the second integer
 *
 * Return: modulus of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

