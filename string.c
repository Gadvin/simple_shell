#include "shell.h"

/**
 * _strlen - function to calculat the length of a string
 * @str: the string whose length is to be calculated
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
* _strcmp - A function that compares 2 strings
* @s1: string 1
* @s2: string 2
*
* Return: 1 if same, 0 if different
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

