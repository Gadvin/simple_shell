#include "shell.h"

/**
 * g_print - to print to the output
 * @message: the charaters to print out
 *
 * Return: NULL
 */

void g_print(char *message)
{
	write(STDOUT_FILENO, message, _strlen(message));
}
