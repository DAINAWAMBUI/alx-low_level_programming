#include <stdio.h>
#include <stdlib.h>

/**
 * main - function
 * @argc: length og argv
 * @argv: number of arguments
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	/*declaration of variables*/
	int position;
	int total;
	int change;
	int aux;
	int coins[] = {25, 10, 5, 2, 1}; /*int array*/

	position = total = change = aux = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	total = atoi(argv[1]); /*convert str to int*/

	if (total <= 0)
	{
		printf("0\n");
		return (0);
	}

	/*while declaration*/

	while (coins[position] != '\0')

	{
		if (total >= coins[position])
		{
			aux = (total / coins[position]);
			change += aux;
			total -= coins[position] * aux;
		}

		position++;

	}

	printf("%d\n", change);
	return (0);
}
