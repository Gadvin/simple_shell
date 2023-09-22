#include "shell.h"

/**
 * prompt - funtion to prompt the simple shell
 * @argc: number of argument to counter
 * @argv: pointer to the argument of values
 * @env: pointer to the environment variable
 *
 * Return: success if null or address
*/

int prompt(int argc, char **argv, char **env)
{
	char *head = "GAD$ ";
	char *input = NULL;
	char **n = NULL;

	(void)argc;

	while (1)
	{
		if (isatty(STDIN_FILENO))
			write(1, head, 5);

		input = _prompt(argv);
		if (input == NULL)
			continue;

		n = s_data(input, argv);
		if (n == NULL)
		{
			free(input);
			continue;
		}
		free(input);

		r_cmd(n, argv, env);

		free_array(n);
	}

	if (input != NULL)
	{
		free(input);
	}

	if (n != NULL)
	{
		free_array(n);
	}
	return (0);
}
