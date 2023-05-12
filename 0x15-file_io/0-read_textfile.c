
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

	memo = malloc(letters * sizeof(char));

	if (memo == NULL)
	{
		return (0);
	}


	if (filename == NULL)
	{
		return (0);
	}

	open_fn = open(filename, O_RDONLY);

	if (open_fn == -1)
	{
		free(memo);
		return (0);
	}

	read_fn = read(open_fn, memo, letters);

	write_fn = write(STDOUT_FILENO, memo, read_fn);

	close(open_fn);
	return (write_fn);
}
