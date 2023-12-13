#include "protoshell.h"

/**
 * _getline - buffers chained commands
 * @lineptr: a line pointer
 * @n: the size of the integer
 * Return: 0 as success
 */

ssize_t _getline(char **lineptr, size_t *n)
{
	if (lineptr == NULL)
	{
		return (-1);
	}

	if (*lineptr == NULL)
	{
		*lineptr = (char *)malloc(*n);
		if (*lineptr == NULL)
		{
			return (-1);
		}
	}

	return (0);
}
