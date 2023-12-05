#include "protoshell.h"

/**
 * main - a function that call and execute other function
 * Return: 0 at success
 */

int main(void)
{
	const char input[100];

	char arg[100];

	while (true)
	{
		inducer();
		receptor(arg, sizeof(arg));
		implementor(input);
	}

	return (0);
}
