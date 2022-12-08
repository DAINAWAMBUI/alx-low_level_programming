#include <stdio.h>
/**
 * main - print out sizes of data types in c
 * code by diana
 * Return: 0
*/

int main(void)
{
int a;
long int b;
long long int c;
char d;
float e;

printf("Size of a char: %lu byte(S)\n", (unsigned long)sizeof(d));
printf("Size of an int: %lu byte(S)\n", (unsigned long)sizeof(a));
printf("Size of a long int: %lu byte(S)\n", (unsigned long)sizeof(b));
printf("Size of a long long int: %lu byte(S)\n", (unsigned long)sizeof(c));
printf("Size of a float: %lu byte(S)\n", (unsigned long)sizeof(e));
return (0);
}