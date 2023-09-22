#include "shell.h"

/**
 * r_command - Function to read a command from the input
 * @command: the command to read
 * @size: the size of the command
 *
 * Return: NULL
 */

void r_command(char *command, size_t size)
{
	char *e = "exit";
        char *en = "env";

	if (fgets(command, size, stdin) == NULL)
	{
		/*if (command == '\0')
                {
                        exe_command(command);
                }*/
                
                /*else if
                {
                        exe_command(command);
                }*/
		if (feof(stdin))
		{
			g_print("\n");
			exit(EXIT_SUCCESS);
		}
		else if (_strcmp(command, e) == 0)
                {
                        exit(98);
                }
                else if (_strcmp(command, en) == 0)
                {
                       exe_command("env");
                }
		else
		{
			g_print("Error while reading input.\n");
			exit(EXIT_FAILURE);
		}
	}
	command[strcspn(command, "\n")] = '\0';
}

