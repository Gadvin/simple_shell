#include "shell.h"

/**
 * _strcom - function of to compare two strings
 * @str1: pointer to the first string
 * @str2: pointer to te second string
 * @sz: lenght of strings
 * Return: 0 when sussful
*/

int _strcom(char *str1, char *str2, size_t sz)
{
	size_t i = 0;

	for (i = 0 ; str1[i] && str2[i] && i < sz ; i++)
	{
		if (str1[i] != str2[i])
		{
			return (-1);
		}
	}

	if (i == sz)
		return (0);

	return (-1);
}
