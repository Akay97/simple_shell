#include "protoshell.h"

/**
 * receptor - a function that collect and run command
 * @arg: the arguments passed
 * @vol: the number of arguments passed
 */

void receptor(char *arg, size_t vol)
{
	char *first_input;
	char *second_input;

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

	first_input = strtok(arg, " ");
	second_input = strtok(NULL, " ");
	if (strcmp(first_input, "exit") == 0)
	{
		if (second_input != NULL)
		{
			exit(atoi(second_input));
		}
		else
		{
			exit(0);
		}
	}
	arg[strcspn(arg, "\n")] = '\0';
i
