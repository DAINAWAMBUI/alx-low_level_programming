#include "main.h"
/**
 *  _strcmp - comares pointers to two strings.
 *  @1: A pointer to the first string to be compared.
 *  @2: A pointer to the second string to be compared.
 *
 *  Return: if str1 < str2, the negative difference of the first unmtched char
 *          if str1 == str2, 0.
 *          if str1 > str2, the positive difference of the first unmatched char
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
