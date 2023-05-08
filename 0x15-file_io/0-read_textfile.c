#include "main.h"
/**
 * read_textfile - collect file input read function
 * @filename: a pointer
 * @letter: sixe of letter
 * Return: depends
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *memo;
	ssize_t read_func, write_func, open_func;

	if (filename == NULL)
	{
		return (0);
	}

	memo = malloc(letters * sizeof(char));

	if (memo == NULL)
	{
		return (0);
	}

	open_func = open(filename, O_RDONLY);
	read_func = read(open_func, memo, letters);
	write_func = write(STDOUT_FILENO, memo read_func);


	if (read_func == -1 || write_func != read_func || write_func == -1 || open_func == -1)
	{
		free(memo);
		return (0);
	}
	free(memo);
	return (write_func);
}
