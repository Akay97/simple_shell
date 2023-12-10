#include <unistd.h>
#include <signal.h>
#include <stdio.h>

/**
 * main - a function that print an exit
 * killed - a function that sends signal to pid
 * pid - this is the process id
 */

int main(void)
{
	int killed;

	printf("PID to be killed: %i\n", -1);
	killed = kill(-1, 9);
	printf("Killed %i\n", killed);
	return (0);
}
