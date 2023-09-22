#include "shell.h"

/**
 * show_path - funtion to show the path
 * @value:pointer to the data to be executed
 * @env: pointer to the environment variable
 * Return: Display null or address when sucessful
*/

int show_path(char **value, char **env)
{
	char *path = display_env(env, "PATH");
	char *direct, *path_dir, *command;
	struct stat dp;
	int f;

	if (path == NULL)
	{
		return (0);
	}
	f = _strlen(path) + 1;
	path_dir = malloc(f * (sizeof(char)));
	if (path_dir == NULL)
	{
		return (0);
	}
	_cp(path_dir, path);
	direct = strtok(path_dir, ":=");
	while (direct != NULL)
	{
		command = malloc(_strlen(direct) + _strlen(value[0]) + 2);
		if (!command)
		{
			free(path_dir);
			return (0);
		}
		_cp(command, direct);
		_concate(command, "/");
		_concate(command, value[0]);
		if (stat(command, &dp) == 0)
		{
			free(value[0]);
			value[0] = command;
			free(path_dir);
			return (1);
		}
		free(command);
		direct = strtok(NULL, ":=");
	}
	free(path_dir);
	return (0);
}
