#include "main.h"
/**
 * create_file - funct to collect str
 * @filename: pointer
 * @text_content: to str copy
 * Return: 1 / -1
 */
int create_file(const char *filename, char *text_content)
{
	int loop_i, open_fn;

	loop_i = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	for (; text_content[loop_i] != '\0'; loop_i++)
	{

	}

	open_fn = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (open_fn == -1)
	{
		return (-1);
	}

	write(open_fn, text_content, loop_i);
	return (1);
}
