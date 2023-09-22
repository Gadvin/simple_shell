#include "shell.h"

/**
 * _show - function to display the output
 * @position: variable to show position
 * @argv: pointer to the argument to values
 * @msg: pointer to the message to display
 * Return: null when sussceful
*/

void _show(int position, char **argv, char *msg)

{
	write(position, argv[0], _strlen(argv[0]));
	write(position, msg, _strlen(msg));
}


/**
 * _showerror - function to  displaying errors
 * @position: variable to show the position
 * @argv: pointer to the argument to values
 * @cmd: pointer to thr command variable
 * Return: null when successful
*/

void _showerror(int position, char **argv, char *cmd)

{
	write(position, argv[0], _strlen(argv[0]));
	write(position, ": 1: ", 5);
	write(position, cmd,  _strlen(cmd));
	write(position, ":data not found\n", _strlen(":data not found\n"));
}
