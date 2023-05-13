#include "main.h"
/**
 * main - main 4 all
 * @argc: counter
 * @argv: pointer char
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char readBuff[1024];
	int file_to, file_from, cont_o = 0, cont_u = 1024;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);

	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
			| S_IRGRP | S_IROTH | S_IWGRP);

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file_from);
		exit(99);
	}

	while (cont_u == 1024)
	{
		cont_u = read(file_from, readBuff, 1024);
		if (cont_u == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		cont_o = write(file_to, readBuff, cont_u);
		if (cont_u > cont_o)
		{
			dprintf(STDERR_FILENO, "Error: Can't  write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't clo\
				se fd %d\n", file_from);
		exit(100);
	}

	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't clo\
				se fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
