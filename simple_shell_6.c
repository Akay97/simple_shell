#include "protoshell.h"

/**
 * input_buf - buffers chained commands
 * @info: the parameter struct
 * @buf: this is the address of buffer
 * @len: address of len variable 
 *
 * Return: bytes read
 */

ssize_t _getline(char **lineptr, size_t *n)
{
	if (lineptr == NULL) {
		return (-1);
	}

	if (*lineptr == NULL) {
		*lineptr = (char *)malloc(*n);
		if (*lineptr == NULL){
			return (-1);
		}
	}

	return 0;
}
