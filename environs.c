#include "shell.h"


/**
 * display_env - funtion to show the environment
 * @env: pointer to the environment
 * @cmd: pointer to the command
 * Return: to display null or address when sussful
*/

char *display_env(char **env, char *cmd)
{
	int i = 0;
	int size = _strlen(cmd);

	for (i = 0; env[i]; i++)
	{
		if (_strcom(cmd, env[i], size) == 0)
		return (env[i]);
	}
	return (NULL);
}

/**
 * show_env - function pointer to display environment
 * @env: environment
 * Return: null or address
*/

void show_env(char **env)
{
	char **g = env;

	while (*g != NULL)
	{
		write(1, *g, _strlen(*g));
		write(1, "\n", 1);
		g++;
	}
}
