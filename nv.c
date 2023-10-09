#include "shell.h"


/**
 * _nv - function to get the number of values
 * @input: pointer to get the  data input
 *
 * Return: when successful it will show the no values
*/

int _nv(char *input)
{
	char *del = " \n";
	char *g;
	int no = 0;

	g = strtok(input, del);
	if (g != NULL)
	{
		no++;
		g = strtok(NULL, del);
	}

	return (no);
}

/**
 * s_data - function to store data
 * @input: pointer to the input data
 * @argv: pointer to the argument of values
 *
 * Return: when successfulreturn values
*/

char **s_data(char *input, char **argv)

{
	char *del = " \t\r\n", *ic = NULL, *f;
	int no = 0, k = 0;
	char **str = NULL;

	no = _strlen(input) + 1;
	ic = malloc(no * (sizeof(char)));

	if (ic == NULL)
	{
		_show(2, argv, " : failed to give memory");
		return (NULL);
	}

	_cp(ic, input);
	no = _nv(ic);
	free(ic);
	str = malloc((no + 1) * sizeof(char *));

	if (str == NULL)
	{
		_show(2, argv, " : failed to give memory");
		return (NULL);
	}

	f = strtok(input, del);
	while (f != NULL)
	{
		str[k] = malloc((_strlen(f) + 1) * sizeof(char));
		if (str == NULL)
		{
			free_array(str);
			_show(2, argv, " : failed to give memory");
			return (NULL);
		}
		_cp(str[k], f);
		f = strtok(NULL, del);
		k++;
	}
	str[no] = NULL;
	return (str);
}
