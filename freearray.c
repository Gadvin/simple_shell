#include "shell.h"

/**
 * free_array - funtion to release an array
 * @arr: pointer to the  array
 * Return: show null or address when sussful
*/

void free_array(char **arr)
{
	int i = 0;

	if (arr == NULL)
		return;

	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}
