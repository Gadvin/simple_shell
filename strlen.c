#include "shell.h"


/**
 * _strlen - function to get the length of a string
 * @str: pointer to the string
 * Return: lenght of the string
*/

int _strlen(char *str)

{
	int i = 0;

	if (str == NULL)
		return (0);

	while (str[i])
		i++;

	return (i);
}
