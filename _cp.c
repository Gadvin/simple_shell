#include "shell.h"

/**
 * _cp - function to copy string
 * @end: pointer to the end of the string
 * @str: pointer to the copied string
 * Return: 1 when successful and any other value is fail
*/

int _cp(char *end, char *str)
{
	int i = 0;

	if (str == NULL || end == NULL)
	{
		return (0);
	}

	while (str[i])
	{
		end[i] = str[i];
		i++;
	}

	end[i] = '\0';

	return (1);
}

