#include <sys/types.h>
#include <stdlib.h>
#include "main.h"
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

/**
 * get_parent_process_id - Get the parent process ID (PPID) on Linux.
 *
 * Return: The PPID.
 */
pid_t get_parent_process_id(void)
{
	return (getppid());
}

/**
 * print_sum_and_ppid - Print the sum of two integers and the PPID.
 *
 * @x: The first integer.
 * @y: The second integer.
 */
void print_sum_and_ppid(int x, int y)
{
	int sum = x + y;
	pid_t my_ppid = get_parent_process_id();

	printf("The sum of %d and %d is %d\n", x, y, sum);
	printf("The PPID is %u\n", (unsigned int)my_ppid);
}
