#include "main.h"

/**
* append_text_to_file - fonction
* @filename: para
* @text_content: para
* Return: int
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int o;

	o = open(filename, O_APPEND | O_WRONLY);
	if (o == -1)
		return (-1);
	if (text_content != NULL)
		write(o, text_content, strlen(text_content));

	close(o);
	return (1);
}
