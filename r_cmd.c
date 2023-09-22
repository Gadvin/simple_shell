#include "shell.h"

/**
 * r_cmd - function to run commands
 * @value: pointer to argument to be execute.
 * @argv: pointer to argument to values.
 * @env: pointer to the environment variable.
 * Return:when successfull it will return null or address.
*/

void r_cmd(char **value, char **argv, char **env)
{
	pid_t exe;
	int g;

	if (value == NULL || value[0] == NULL)
	return;

	if (value[0][0] != '.' && value[0][0] != '/')
	{
		if (_notfound(value, env))
			return;
		else if (!show_path(value, env))
		{
			_showerror(2, argv, value[0]);
			return;
		}
	}

	exe = fork();
	if (exe == -1)
	{
		_show(2, argv, ":creating process failed\n");
		return;
	}

	if (exe == 0)
	{
		if (execve(value[0], value, env) == -1)
		{
			_showerror(2, argv, value[0]);
			free_array(value);
			exit(1);
		}
	}
	else
	{
		do {
			waitpid(exe, &g, WUNTRACED);
		} while (!WIFEXITED(g) && !WIFSIGNALED(g));
	}
}
