#include <stdio.h>
#include <unistd.h>

void printProductAndPid(void)
{
    int x = 3;
    int y = 4;
    int product = x * y;
    pid_t my_pid;

    my_pid = getpid();

    printf("The product of both numbers is %d\n", product);
    printf("And the pid is %u\n", (unsigned int)my_pid);
}
