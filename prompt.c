#include "shell.h"

/**
 * gad_prompt-function to display content
 *
 * Return: NULL
 */

void gad_prompt(void)
{
	g_print("$ ");
	/*
	char *cmd = NULL;
	size_t n = 10;
	size_t ress;
	char *e = "exit";
	char *en = "env";

	cmd = malloc (sizeof (char) * 10);
	
	while (1)
	{
		getline(&cmd, &n, stdin);
		printf("$ ");
		if (cmd[0] == '\0')
		{
			exe_command(cmd);
		}
		else if (_strcmp(cmd, e) == 0)
		{
			exit(98);
		}
		else if (_strcmp(cmd, en) == 0) 
		{
			environmentVar();
		}
		else
		{
			exe_command(cmd);
		}
		
		if (cmd!= NULL) 
		{
			free(cmd);
		}
	}
		
	free(cmd);
	*/
}
