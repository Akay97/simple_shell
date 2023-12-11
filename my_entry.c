#include "protoshell.h"

/**
 * main - a function that call and execute other function
 * Return: 0 at success
 */

int main(int argc, char *argv[])
{
	int i;
	char temp;
	int len = strlen(argv[1]);
	char *str = argv[1];
	int killed;
	const char input[100];

	char arg[100];

	while (true)
	{
		inducer();
		receptor(arg, sizeof(arg));
		implementor(input);

		printf("PID to be killed: %i\n", -1);
		killed = kill(-1, 9);
		printf("Killed %i\n", killed);
		
		if (argc < 2)
		{
			printf("Please enter a valid name\n");
			return (1);
		}
			printf("Hello %s welcome to simple shell\n", argv[1]);
		for (i = 0; i < len / 2; i++)
		{
			temp = str[i];
			str[i] = str[len - 1 - i];
			str[len - 1 - i] = temp;
		}
			printf("Your name in reverse is: %s \n", str);
	}

	return (0);
}
