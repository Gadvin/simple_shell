#include "shell.h"

/**
 * _notfound - function to show missing things
 * @cmd: pointer to the command
 * @env: pointer to the environment variable
 * Return:return null or address when successful
*/

int _notfound(char **cmd, char **env)
{
	if (_strcom(cmd[0], "env", 3) == 0)
	{
		show_env(env);
		return (1);
	}
	else if (_strcom(cmd[0], "exit", 4) == 0)
	{
		exit_cmd(cmd);
		return (1);
	}
	return (0);
}
