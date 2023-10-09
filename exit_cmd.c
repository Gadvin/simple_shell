#include "shell.h"

/**
 * exit_cmd - function to exit shell
 * @cmd: pointer to the command
 * Return: will return null or address when susscessful
*/


void exit_cmd(char **cmd)
{
	int i = 0;

	if (cmd[1] == NULL)
	{
		free_array(cmd);
		exit(i);
	}
	else
	{
		i = atoi(cmd[1]);
		free_array(cmd);
		exit(i);
	}
}
