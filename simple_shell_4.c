#include "protoshell.h"

/**
 * exit_program - a function that print an exit
 * Return: 0 as success
 */

int exit_program(void)
{
	myoutput("Goodbye");
	kill(-1, 9);
	return (0);
}
