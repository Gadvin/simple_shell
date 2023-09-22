#include "shell.h"

/**
 * _concate - function to concating two strings
 * @end: pointer to first string and have the final result.
 * @str: pointer to the  strings
 * Return: when sussceful display null
*/

char *_concate(char *end, const char *str)
{
	char *l = end;
	const char *temp = str;

	while (*l != '\0')
		l++;

	while (*temp != '\0')
	{
		*l++ = *temp++;
	}
	*l = '\0';

	return (end);
}
