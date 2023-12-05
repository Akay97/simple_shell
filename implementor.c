#include "protoshell.h"

/**
 * implementor - a function that controls the child and the parent process
 * @input: the user input or command
 */

void implementor(const char *input)
{
	pid_t c_id = fork();/*create a child process*/

	if (c_id == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (c_id == 0)
	{
		/*child process*/
		execlp(input, input, (char *)NULL); /*read on execve*/
		perror("execlp");
		exit(EXIT_FAILURE);
	}
	else
	{
		/*parent process*/
		wait(NULL);
	}
}
