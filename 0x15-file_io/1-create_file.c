#include "main.h"

/**
* create_file - fonction
* @filename: para
* @text_content: para
* Return: int
*/

int create_file(const char *filename, char *text_content)
{
	int o;

	if (filename == NULL)
		return (-1);

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (o == -1)
		return (-1);

	if (text_content != NULL)
		write(o, text_content, strlen(text_content));

	close(o);
	return (1);
}
