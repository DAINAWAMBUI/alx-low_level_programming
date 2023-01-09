#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * check_num - checks - string there are digit
 * @str: array str
 *
 * Return: always 0 (successful)
 */

int check_num(char *str)

{
	/*variable declaration*/
	unsigned int count;

	count = 0;

	while (count < strlen(str)) /*counting string*/

	{
		if (!isdigit(str[count])) /*check if str there are digit*/
		{
			return (0);
		}

		count++;
	}
	return (1);
}

/**
 * main - prints the name of the program
 * @argc: counts arguments
 * @argv: arguments
 *
 * Return: always 0 (successful)
 */

int main(int argc, char *argv[])

{
	/*variable declaration*/
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc) /*goes through the whole array*/
	{
		if (check_num(argv[count]))

		{
			str_to_int = atoi(argv[count]); /*atoi --> convert string into in*/
			sum += str_to_int;
		}

		/*condition if one of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum); /*prints sum*/

	return (0);
}

