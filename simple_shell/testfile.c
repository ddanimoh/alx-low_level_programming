#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	pid_t child_pid;

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error:");
		return (1);
	}
	if (child_pid == 0)
	{
		printf("Child process\n");
		exit(0);
	}
	else
	{
		printf("Parent process\n");
		wait(NULL);
	}
	return (0);
}
