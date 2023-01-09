#include "main.h"
#include <stdio.h>

/**
 * main - print the name of the program
 * @argc: count arguments
 * @argv: arguments
 *
 * Return: always 0 (success)
 */

int main(int argc, char *argv[])
{
	/*declaring variables*/
	int count = 0;

	if (argc > 0)
	{
		/*while - print each arguments*/
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
