#include "shell.h"

/**
 * main - funtion to take 3 arguments and display the results
 * @argc: number of argumentsargument
 * @argv: string of argument
 * @env: pointer to the environment addres
 *
 * Return: null when empty or address of code.
 */

int main(int argc, char **argv, char **env)
{
	int begin = prompt(argc, argv, env);

	return (begin);

}
