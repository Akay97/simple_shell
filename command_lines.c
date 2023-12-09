#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - a function that prints an argument and reverse
 * the user name
 * @argv: this is a NULL terminated array of strings
 * @argc: it is the number of items in argv
 *
 * Return: 0 as success
 */

int main(int argc, char *argv[])
{
	int i;
	char temp;
	int len = strlen(argv[1]);
	char *str = argv[1];

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
	return (0);
}
