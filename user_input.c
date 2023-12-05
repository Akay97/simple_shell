#include "protoshell.h"

/**
 * receptor - a function that collect and run
 * @arg: the arguments passed
 * @vol: the number of arguments passed
 */

void receptor(char *arg, size_t vol)
{
	if (fgets(arg, vol, stdin) == NULL)
	{
		if (feof(stdin))
		{
			myoutput("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			myoutput("Error trying to read the argument.\n");
			exit(EXIT_FAILURE);
		}
	}
	arg[strcspn(arg, "\n")] = '\0';
}
