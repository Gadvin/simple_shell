#include "shell.h"

/**
 * environmentVar - function that gets environemnt variable
 *
 * Return: void
 **/
void environmentVar(void)
{
	char **env = environ;

	while (env != NULL)
	{
		printf("%s\n", *env);
		env++;
	}
}
