#include "protoshell.h"

/**
 * myoutput - a function that print to the standard output
 * @type: the user input type
 */

void myoutput(const char *type)
{
	write(STDOUT_FILENO, type, strlen(type));
}
