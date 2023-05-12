#include "main.h"
/**
 * append_text_to_file - funct
 * @filename: name of the file
 * @text_content: the NULL
 * Return: 1 / -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int loop_i, open_fn;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}

	for (loop_i = 0; text_content[loop_i] != '\0'; loop_i++)
	{

	}

	open_fn = open(filename, O_WRONLY | O_APPEND);
	if (open_fn == -1)
	{
		return (-1);
	}

	write(open_fn, text_content, loop_i);
	return (1);
}
