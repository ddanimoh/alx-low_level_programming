#include "main.h"
/**
 * read_textfile - collect file input read function
 * @filename: a pointer
 * @letters: sixe of letter
 * Return: depends
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *memo;
	ssize_t read_fn, write_fn, open_fn;

	if (filename == NULL)
	{
		return (0);
	}

	memo = malloc(letters * sizeof(char));

	if (memo == NULL)
	{
		return (0);
	}

	open_fn = open(filename, O_RDONLY);
	read_fn = read(open_fn, memo, letters);
	write_fn = write(STDOUT_FILENO, memo read_fn);


	if (read_fn == -1 || write_fn != read_fn || write_fn == -1 || open_fn == -1)
	{
		free(memo);
		return (0);
	}
	free(memo);
	return (write_fn);
}
