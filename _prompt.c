#include "shell.h"

/**
 * _prompt - funtction to prompts the shell file
 * @argv: pointer to the value of argument
 *
 * Return: wwhen successfull null or address
*/

char *_prompt(char **argv)

{
	char *command = NULL;
	size_t g = 0;
	ssize_t size;

	size =  getline(&command, &g, stdin);
	if (size == -1)
	{
		if (feof(stdin))
		{
			free(command);
			exit(0);
		}
		else
		{
			_show(2, argv, " :input cannot be read\n");
			free(command);
			return (NULL);
		}
	}

	if (command[size - 1] == '\n')
		command[size - 1] = '\0';

	return (command);
}
