#include <stdio.h>

/**
 * main - a function that prints the multiples of 5
 * between 1 to 100
 * Return: 0 as success
 */

int main(void)
{

	int num;

	for (num = 0; num <= 100; num++)
	{
		if (num % 5 == 0)
		{
			while (num == 0)
			{
				num += 1;
			}
			printf("%d \n", num);
		}
	}
	return (0);
}
